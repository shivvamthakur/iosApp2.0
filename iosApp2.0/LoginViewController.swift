//
//  LoginViewController.swift
//  iosApp2.0
//
//  Created by Shivam Thakur on 15/05/23.
//

import UIKit
import MoEngageSDK
class LoginViewController: UIViewController {
    
    @IBAction func logoutButton(_ sender: Any) {
        
        let Logout = storyboard?.instantiateViewController(identifier: "ViewController") as! ViewController
        
        self.present(Logout, animated: true)
        
        MoEngageSDKAnalytics.sharedInstance.resetUser()
        
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
