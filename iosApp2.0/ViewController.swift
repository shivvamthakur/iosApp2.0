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
        
        
        MoEngageSDKAnalytics.sharedInstance.setUniqueID(Username.text ?? " ")
        let Login = storyboard?.instantiateViewController(identifier: "LoginViewController") as! LoginViewController
        
        self.present(Login, animated: true)
        
        
        
    }
    
    @IBAction func SignUpButton(_ sender: Any) {
        
        let Signup = storyboard?.instantiateViewController(identifier: "SignupViewController") as! SignupViewController
        
        MoEngageSDKAnalytics.sharedInstance.trackEvent("SignUP Screen open", withProperties: nil)
        
        self.present(Signup, animated: true)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }


}

