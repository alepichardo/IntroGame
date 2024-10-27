using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    public float moveSpeed = 10f;
    public Vector2 screenLimits = new Vector2(5f, 10f);
    public float tiltAmount = 15f;
    public GameObject boltPrefab;
    public Transform boltSpawn;
    public float fireRate = 0.5f;

    private Rigidbody rb;
    private float nextFire = 0f;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void FixedUpdate()
    {
        Vector2 input = InputManager.Instance.move.ReadValue<Vector2>();
        Vector3 movement = new Vector3(input.x, 0, input.y) * moveSpeed * Time.fixedDeltaTime;
        Vector3 newPosition = rb.position + movement;

        newPosition.x = Mathf.Clamp(newPosition.x, -screenLimits.x, screenLimits.x);
        newPosition.z = Mathf.Clamp(newPosition.z, -screenLimits.y, screenLimits.y);
        rb.MovePosition(newPosition);

        float rotationZ = -input.x * tiltAmount;
        rb.rotation = Quaternion.Euler(0, 0, rotationZ);

        //Fire
        if (InputManager.Instance.fire.triggered && Time.time >= nextFire)
        {
            nextFire = Time.time + fireRate;
            Instantiate(boltPrefab, boltSpawn.position, boltSpawn.rotation);
        }
    }
}
