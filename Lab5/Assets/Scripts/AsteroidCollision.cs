using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteroidCollision : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Bolt"))
        {
            Destroy(other.gameObject); // Destroy the bolt
            Destroy(gameObject); // Destroy the asteroid
        }
    }
}
