//
//  SignupViewController.swift
//  iosApp2.0
//
//  Created by Shivam Thakur on 16/05/23.
//

import UIKit
import MoEngageSDK

class SignupViewController: UIViewController {

    
    
    
    @IBOutlet weak var FirstName: UITextField!
    
    @IBOutlet weak var LastName: UITextField!
    
    
    @IBOutlet weak var Email: UITextField!
    
    @IBOutlet weak var Password: UITextField!
    
    
    @IBOutlet weak var ConfirmPassword: UITextField!
    
  
    @IBOutlet weak var ChooseUsername: UITextField!
    
  
    @IBAction func SubmitButton(_ sender: Any) {
        MoEngageSDKAnalytics.sharedInstance.setFirstName(FirstName.text ?? " ")
        MoEngageSDKAnalytics.sharedInstance.setLastName(LastName.text ?? " ")
        MoEngageSDKAnalytics.sharedInstance.setEmailID(Email.text ?? " ")
        MoEngageSDKAnalytics.sharedInstance.setUniqueID(ChooseUsername.text ?? " ")
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}
