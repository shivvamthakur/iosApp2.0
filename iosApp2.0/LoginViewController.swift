//
//  LoginViewController.swift
//  iosApp2.0
//
//  Created by Shivam Thakur on 15/05/23.
//

import UIKit
import MoEngageSDK
import MoEngageInApps


class LoginViewController: UIViewController {
//    @IBOutlet weak var Username: UITextField!
    
    @IBAction func logoutButton(_ sender: Any) {
        
        let Logout = storyboard?.instantiateViewController(identifier: "ViewController") as! ViewController
        
        self.present(Logout, animated: true)
        
        MoEngageSDKAnalytics.sharedInstance.resetUser()
        
    }
 
    
  
    
    @IBAction func Purchase(_ sender: Any) {
//        MoEngageSDKAnalytics.sharedInstance.setUniqueID(Username.text ?? " ")
        var eventAttrDict : Dictionary<String,Any> = Dictionary()
        eventAttrDict["ProductName"] = "MinionSticker"
        eventAttrDict["BrandName"] = "Minions"
        eventAttrDict["Items In Stock"] = 121

        let eventProperties = MoEngageProperties(withAttributes: eventAttrDict)

        eventProperties.addAttribute(300.00, withName: "price")
        eventProperties.addAttribute("Rupees", withName: "currency")
        eventProperties.addAttribute(true, withName: "in_stock")
        eventProperties.addDateEpochAttribute(1439322197, withName: "Time added to cart")
        eventProperties.addDateISOStringAttribute("2020-02-22T12:37:56Z", withName: "Time of checkout")
        eventProperties.addDateAttribute(Date(), withName: "Time of purchase")

        eventProperties.addLocationAttribute(MoEngageGeoLocation.init(withLatitude: 30.72984395, andLongitude: 76.78414567016054), withName: "Pickup Location")
        MoEngageSDKAnalytics.sharedInstance.trackEvent("Successful Purchase", withProperties: eventProperties)
        MoEngageSDKInApp.sharedInstance.showInApp()
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
