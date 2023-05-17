//
//  ViewController.swift
//  iosApp2.0
//
//  Created by Shivam Thakur on 09/05/23.
//


import UIKit
import MoEngageSDK
class ViewController: UIViewController {
    
    
    
    @IBOutlet weak var Username: UITextField!
    
    @IBOutlet weak var Password: UITextField!
    
    @IBAction func LoginButton(_ sender: Any) {
        
        let Login = storyboard?.instantiateViewController(identifier: "LoginViewController") as! LoginViewController
        
        self.present(Login, animated: true)
        MoEngageSDKAnalytics.sharedInstance.setUniqueID(Username.text ?? " ")
        
        
    }
    
    @IBAction func SignUpButton(_ sender: Any) {
        
        let Signup = storyboard?.instantiateViewController(identifier: "SignupViewController") as! SignupViewController
        
        self.present(Signup, animated: true)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }


}

