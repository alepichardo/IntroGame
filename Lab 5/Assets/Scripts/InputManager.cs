using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputManager : MonoBehaviour
{
    public static InputManager Instance;
    public InputActionAsset InputActions;
    public InputAction move;
    public InputAction fire;

    void Start()
    {
        Instance = this;
        move = InputActions.FindAction("Move");
        fire = InputActions.FindAction("Fire");
    }
}
