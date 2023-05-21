//
//  MoEngageInAppTriggerCondition.h
//  MoEngageInApps
//
//  Created by Chengappa C D on 31/07/19.
//  Copyright © 2019 MoEngage. All rights reserved.
//

#import <MoEngageInApps/MoEngageModelObject.h>

NS_ASSUME_NONNULL_BEGIN

@interface MoEngageInAppTriggerCondition : MoEngageModelObject <NSCoding>
@property(strong, nonatomic) NSString* actionName;
@property(strong, nonatomic) NSDictionary* eventConditionDict;
@end

NS_ASSUME_NONNULL_END
