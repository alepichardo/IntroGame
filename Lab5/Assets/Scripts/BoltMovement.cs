using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoltMovement : MonoBehaviour
{
    public float speed = 7f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.transform.Translate(Vector3.forward * speed * Time.deltaTime);
    }
}
