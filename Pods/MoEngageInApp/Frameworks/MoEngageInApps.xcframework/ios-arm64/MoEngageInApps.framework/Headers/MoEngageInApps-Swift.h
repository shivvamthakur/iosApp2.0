#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef MOENGAGEINAPPS_SWIFT_H
#define MOENGAGEINAPPS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#import <MoEngageInApps/MoEngageInApps.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MoEngageInApps",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;
@class NSObject;

/// MoEngageInAppAction gives all the information about the inApp action
SWIFT_CLASS("_TtC14MoEngageInApps19MoEngageInAppAction")
@interface MoEngageInAppAction : MoEngageModelObject
/// Gives the action type Navigation/Custom Action
@property (nonatomic, readonly) MoEngageInAppActionType actionType;
/// If the action type is Navigation then the <code>screenName</code> indicates the name of the screen to which  navigation has to be performed
@property (nonatomic, readonly, copy) NSString * _Nullable screenName;
/// Custom key-value pairs entered while creating the campaign for the action.
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull keyValuePairs;
/// Method to create an instance of MoEngageInAppAction
/// This method is for internal purpose. Do not call it explicitly.
/// \param actionType Gives the action type Navigation/Custom Action
///
/// \param screenName Incase the action type is Navigation then the screenName to which the navigation has to be performed
///
/// \param keyValuePairs Custom key-value pairs entered while creating the campaign for the action.
///
- (nonnull instancetype)initWithActionType:(MoEngageInAppActionType)actionType screenName:(NSString * _Nullable)screenName keyValuePairs:(NSDictionary<NSString *, id> * _Nonnull)keyValuePairs OBJC_DESIGNATED_INITIALIZER;
/// Method to create an instance of MoEngageInAppAction
/// note:
/// This method is for internal purpose. Do not call it explicitly.
/// \param actionType Gives the action type Navigation/Custom Action
///
/// \param keyValuePairs Custom key-value pairs entered while creating the campaign for the action.
///
- (nonnull instancetype)initWithActionType:(MoEngageInAppActionType)actionType keyValuePairs:(NSDictionary<NSString *, id> * _Nonnull)keyValuePairs;
- (nonnull instancetype)initWithDictionary:(NSDictionary * _Nullable)dict SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSDate;

/// MoEngageInAppCampaign gives all the information about the inApp campaign
SWIFT_CLASS("_TtC14MoEngageInApps21MoEngageInAppCampaign")
@interface MoEngageInAppCampaign : MoEngageModelObject
/// A unique Id to identify the campaign
@property (nonatomic, readonly, copy) NSString * _Nonnull campaignId;
/// Campaign name provided while creating the campaign
@property (nonatomic, readonly, copy) NSString * _Nonnull campaignName;
/// Date instance of the expiry time of the campaign
@property (nonatomic, readonly, strong) NSDate * _Nonnull expiryTime;
/// isDraft is a flag which provides info if the campaign is a draft being shown for testing purpose
@property (nonatomic, readonly) BOOL isDraft;
/// Dictionary containing formatted campaign id, and other campaign meta information
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nonnull campaignContext;
/// Method to create an instance of MoEngageInAppCampaign
/// This method is for internal purpose. Do not call it explicitly.
/// \param campaignId A unique Id to identify the campaign
///
/// \param campaignName Campaign name provided while creating the campaign
///
/// \param expiryTime Date instance of the expiry time of the campaign
///
/// \param isDraft isDraft is a flag which provides info if the campaign is a draft being shown for testing purpose
///
/// \param campaignContext Dictionary containing formatted campaign id, and other campaign meta information
///
- (nonnull instancetype)initWithCampaignId:(NSString * _Nonnull)campaignId campaignName:(NSString * _Nonnull)campaignName expiryTime:(NSDate * _Nonnull)expiryTime isDraft:(BOOL)isDraft campaignContext:(NSDictionary<NSString *, id> * _Nonnull)campaignContext OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDictionary:(NSDictionary * _Nullable)dict SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MoEngageSDKInstance;
@class MoEngageInAppCampaignsData;
@class MoEngageInAppStatData;

SWIFT_CLASS("_TtC14MoEngageInApps31MoEngageInAppFileStorageHandler")
@interface MoEngageInAppFileStorageHandler : NSObject
- (void)migrateInAppsDataWithSdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance;
- (void)saveNoNEncryptedInAppDataWithData:(MoEngageInAppCampaignsData * _Nonnull)data sdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance;
- (MoEngageInAppCampaignsData * _Nonnull)fetchInAppDataWithSdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance SWIFT_WARN_UNUSED_RESULT;
- (void)saveInAppDataWithData:(MoEngageInAppCampaignsData * _Nonnull)data sdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance;
- (void)migrateInAppStatDataWithSdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance;
- (MoEngageInAppStatData * _Nonnull)fetchInAppStatDataWithSdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance SWIFT_WARN_UNUSED_RESULT;
- (void)saveInAppStatDataWithData:(MoEngageInAppStatData * _Nonnull)data sdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14MoEngageInApps22MoEngageInAppMigration")
@interface MoEngageInAppMigration : NSObject
+ (void)migrateDataFromPreviousVersionsWithSdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance;
+ (void)migrateDataFromNoNEncryptionToEncryptionWithSdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance currentSDKInstance:(MoEngageSDKInstance * _Nonnull)currentSDKInstance;
+ (void)removeEncryptedFolderWithSdkInstance:(MoEngageSDKInstance * _Nonnull)sdkInstance;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class MoEngageAccountMeta;
@class MoEngageInAppSelfHandledCampaign;

/// Confirm to this protocol to get all the InApp campaigns related callbacks
SWIFT_PROTOCOL("_TtP14MoEngageInApps27MoEngageInAppNativeDelegate_")
@protocol MoEngageInAppNativeDelegate <NSObject>
/// This method will be called when an inApp Campaign is shown by the SDK
/// \param inappCampaign MoEngageInAppCampaign instance providing the info of the campaign currently being shown
///
/// \param accountMeta MoEngageAccountMeta instance providing the info of the MoEngage Account to which the campaign belongs
///
- (void)inAppShownWithCampaignInfo:(MoEngageInAppCampaign * _Nonnull)inappCampaign forAccountMeta:(MoEngageAccountMeta * _Nonnull)accountMeta;
/// This method will be called when a inApp is clicked by the user to perform a navigation action
/// \param inappCampaign MoEngageInAppCampaign instance providing the info of the campaign which is clicked by the user
///
/// \param navigationAction MoEngageInAppAction instance giving navigation action info along with key-value pairs provided while creating the campaign
///
/// \param accountMeta MoEngageAccountMeta instance providing the info of the MoEngage Account to which the campaign belongs
///
- (void)inAppClickedWithCampaignInfo:(MoEngageInAppCampaign * _Nonnull)inappCampaign andNavigationActionInfo:(MoEngageInAppAction * _Nonnull)navigationAction forAccountMeta:(MoEngageAccountMeta * _Nonnull)accountMeta;
/// This method will be called when an inApp Campaign is clicked by the user to perform Custom Action
/// \param inappCampaign MoEngageInAppCampaign instance providing the info of the campaign which is clicked by the user
///
/// \param customAction MoEngageInAppAction instance giving custom action info along with key-value pairs provided while creating the campaign
///
/// \param accountMeta MoEngageAccountMeta instance providing the info of the MoEngage Account to which the campaign belongs
///
- (void)inAppClickedWithCampaignInfo:(MoEngageInAppCampaign * _Nonnull)inappCampaign andCustomActionInfo:(MoEngageInAppAction * _Nonnull)customAction forAccountMeta:(MoEngageAccountMeta * _Nonnull)accountMeta;
/// This method will be called when an inApp is dismissed
/// \param inappCampaign MoEngageInAppCampaign instance providing the info of the campaign which is being dismissed by the user
///
/// \param accountMeta MoEngageAccountMeta instance providing the info of the MoEngage Account to which the campaign belongs
///
- (void)inAppDismissedWithCampaignInfo:(MoEngageInAppCampaign * _Nonnull)inappCampaign forAccountMeta:(MoEngageAccountMeta * _Nonnull)accountMeta;
/// This method will be only be called when a self handled inApp is triggered by an event
/// \param inappCampaign MoEngageInAppSelfHandledCampaign instance with self handled inApp info
///
/// \param accountMeta MoEngageAccountMeta instance providing the info of the MoEngage Account to which the campaign belongs
///
- (void)selfHandledInAppTriggeredWithInfo:(MoEngageInAppSelfHandledCampaign * _Nonnull)inappCampaign forAccountMeta:(MoEngageAccountMeta * _Nonnull)accountMeta;
@end


/// MoEngageInAppSelfHandledCampaign gives all the information required for a self-handled inApp campaign
SWIFT_CLASS("_TtC14MoEngageInApps32MoEngageInAppSelfHandledCampaign")
@interface MoEngageInAppSelfHandledCampaign : MoEngageInAppCampaign
/// campaignContent provides information entered while creating a self-handled inapp campaign
@property (nonatomic, readonly, copy) NSString * _Nonnull campaignContent;
/// In case auto dismiss was provided while creating the self-handled inapp campaign, the same will be provided here. By default the value will be -1.
@property (nonatomic, readonly) NSInteger autoDismissInterval;
/// Method to create an instance of MoEngageInAppSelfHandledCampaign
/// This method is for internal purpose. Do not call it explicitly.
/// \param campaignContent campaignContent provides information entered while creating a self-handled inapp campaign
///
/// \param autoDismissInterval In case auto dismiss was provided while creating the self-handled inapp campaign, the same will be provided here. By default the value will be -1.
///
/// \param campaign_id A unique Id to identify the campaign
///
/// \param campaign_name Campaign name provided while creating the campaign
///
/// \param expiry_time Date instance of the expiry time of the campaign
///
/// \param isDraft isDraft is a flag which provides info if the campaign is a draft being shown for testing purpose
///
/// \param campaignContext Dictionary containing formatted campaign id, and other campaign meta information
///
- (nonnull instancetype)initWithCampaignContent:(NSString * _Nonnull)campaignContent autoDismissInterval:(NSInteger)autoDismissInterval campaign_id:(NSString * _Nonnull)campaign_id campaign_name:(NSString * _Nonnull)campaign_name expiry_time:(NSDate * _Nonnull)expiry_time isDraft:(BOOL)isDraft campaignContext:(NSDictionary<NSString *, id> * _Nonnull)campaignContext OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCampaignId:(NSString * _Nonnull)campaignId campaignName:(NSString * _Nonnull)campaignName expiryTime:(NSDate * _Nonnull)expiryTime isDraft:(BOOL)isDraft campaignContext:(NSDictionary<NSString *, id> * _Nonnull)campaignContext SWIFT_UNAVAILABLE;
@end

@class UIViewController;

SWIFT_CLASS("_TtC14MoEngageInApps16MoEngageSDKInApp")
@interface MoEngageSDKInApp : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MoEngageSDKInApp * _Nonnull sharedInstance;)
+ (MoEngageSDKInApp * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Call this method to show Pop-up OR Fullscreen InApps inside the app for Default MoEngage Instance
- (void)showInApp;
/// Call this method to show Pop-up OR Fullscreen InApps inside the app.
/// \param appId MoEngage Account Identifier.
///
- (void)showInAppForAppId:(NSString * _Nullable)appId;
/// Method to show Nudge campaign at the specified position for Default MoEngage Instance
/// \param position specifies the position where the nudge has to be showed Top/Bottom.
///
- (void)showNudgeAtPosition:(MoEngageNudgePosition)position;
/// Method to show Nudge campaign at the specified position
/// \param position specifies the position where the nudge has to be showed Top/Bottom.
///
/// \param appId MoEngage Account Identifier.
///
- (void)showNudgeAtPosition:(MoEngageNudgePosition)position forAppId:(NSString * _Nullable)appId;
/// Method to get the UIView instance of the nudge to embed it anywhere inside the app
/// \param completionBlock Completion Block for getting the Nudge InApp Campaign, which is used in case an inApp has to be embedded in your screen.
///
- (void)getNudgeViewWithCompletionBlock:(NudgeCreationCompletionBlock _Nonnull)completionBlock;
/// Method to get the UIView instance of the nudge to embed it anywhere inside the app
/// \param appId MoEngage Account Identifier.
///
/// \param completionBlock Completion Block for getting the Nudge InApp Campaign, which is used in case an inApp has to be embedded in your screen.
/// It gives nudge UIView instance and MoEngageInAppCampaign instance giving campaign info.
///
- (void)getNudgeViewForAppId:(NSString * _Nullable)appId completionBlock:(NudgeCreationCompletionBlock _Nonnull)completionBlock;
/// Incase Nudge campaign is obtained using getNudgeViewWithCompletionBlock: and embedded by developers in the app, this method has to be called to inform if the nudge is shown successfully to the user for Default MoEngageInstance.
/// \param campaignInfo MoEngageInAppCampaign instance with the campaign info.
///
- (void)nudgeCampaignShown:(MoEngageInAppCampaign * _Nullable)campaignInfo;
/// Incase Nudge campaign is obtained using getNudgeViewWithCompletionBlock: and embedded by developers in the app, this method has to be called to inform if the nudge is shown successfully to the user.
/// \param campaignInfo MoEngageInAppCampaign instance with the campaign info.
///
/// \param appId MoEngage Account Identifier.
///
- (void)nudgeCampaignShown:(MoEngageInAppCampaign * _Nullable)campaignInfo forAppId:(NSString * _Nullable)appId;
/// Method to obtain self-handled inApp Campaign for Default MoEngage Instance.
/// \param completionBlock Completion Block which provides MoEngageInAppSelfHandledCampaign* instance(campaignInfo), incase one is active and satisfies all the rule checks OR else campaignInfo will be nil.
///
- (void)getSelfHandledInAppWithCompletionBlock:(void (^ _Nonnull)(MoEngageInAppSelfHandledCampaign * _Nullable, MoEngageAccountMeta * _Nullable))completionBlock;
/// Method to obtain self-handled inApp Campaign.
/// \param appId MoEngage Account Identifier.
///
/// \param completionBlock Completion Block which provides MoEngageInAppSelfHandledCampaign* instance(campaignInfo), incase one is active and satisfies all the rule checks OR else campaignInfo will be nil.
///
- (void)getSelfHandledInAppForAppId:(NSString * _Nullable)appId completionBlock:(void (^ _Nonnull)(MoEngageInAppSelfHandledCampaign * _Nullable, MoEngageAccountMeta * _Nullable))completionBlock;
/// Method to be called if a self-handled InApp is shown inside the app for Default MoEngage Instance.
/// \param campaignInfo MoEngageInAppSelfHandledCampaign instance with the campaign info.
///
- (void)selfHandledShownWithCampaignInfo:(MoEngageInAppSelfHandledCampaign * _Nonnull)campaignInfo;
/// Method to be called if a self-handled InApp is shown inside the app.
/// \param campaignInfo MoEngageInAppSelfHandledCampaign instance with the campaign info.
///
/// \param appId MoEngage Account Identifier.
///
- (void)selfHandledShownWithCampaignInfo:(MoEngageInAppSelfHandledCampaign * _Nonnull)campaignInfo forAppId:(NSString * _Nullable)appId;
/// Method to be called if a self-handled InApp is clicked by the user for Default MoEngage Instance
/// \param campaignInfo MoEngageInAppSelfHandledCampaign instance with the campaign info.
///
- (void)selfHandledClickedWithCampaignInfo:(MoEngageInAppSelfHandledCampaign * _Nonnull)campaignInfo;
/// Method to be called if a self-handled InApp is clicked by the user
/// \param campaignInfo MoEngageInAppSelfHandledCampaign instance with the campaign info.
///
/// \param appId MoEngage Account Identifier.
///
- (void)selfHandledClickedWithCampaignInfo:(MoEngageInAppSelfHandledCampaign * _Nonnull)campaignInfo forAppId:(NSString * _Nullable)appId;
/// Method to be called if a self-handled InApp is dismissed by the user for Default MoEngage Instance
/// \param campaignInfo MoEngageInAppSelfHandledCampaign instance with the campaign info.
///
- (void)selfHandledDismissedWithCampaignInfo:(MoEngageInAppSelfHandledCampaign * _Nonnull)campaignInfo;
/// Method to be called if a self-handled InApp is dismissed by the user
/// \param campaignInfo MoEngageInAppSelfHandledCampaign instance with the campaign info.
///
/// \param appId MoEngage Account Identifier.
///
- (void)selfHandledDismissedWithCampaignInfo:(MoEngageInAppSelfHandledCampaign * _Nonnull)campaignInfo forAppId:(NSString * _Nullable)appId;
/// Method to disable inApps module for Default MoEngage Instance
- (void)disableInApps;
/// Method to disable inApps module.
/// \param appId MoEngage Account Identifier.
///
- (void)disableInAppsForAppId:(NSString * _Nullable)appId;
/// Call this method to block InApps in a particular ViewController for Default MoEngage Instance
/// \param viewController UIViewController instance where InApps have to be blocked
///
- (void)blockInAppForViewController:(UIViewController * _Nonnull)viewController;
/// Call this method to block InApps in a particular ViewController
/// \param viewController UIViewController instance where InApps have to be blocked
///
/// \param appId MoEngage Account Identifier.
///
- (void)blockInAppForViewController:(UIViewController * _Nonnull)viewController forAppId:(NSString * _Nullable)appId;
/// Method to set the current inApp contexts, so that campaign with contexts will only be shown when the current context contains the campaign context for Default MoEngage instance.
/// \param contexts Array of contexts
///
- (void)setCurrentInAppContexts:(NSArray<NSString *> * _Nonnull)contexts;
/// Method to set the current inApp contexts, so that campaign with contexts will only be shown when the current context contains the campaign context
/// \param contexts Array of contexts
///
/// \param appId MoEngage Account Identifier.
///
- (void)setCurrentInAppContexts:(NSArray<NSString *> * _Nonnull)contexts forAppId:(NSString * _Nullable)appId;
/// Call this methods to invalidate/reset the contexts set currently in the app for Default MoEngage instance.
- (void)invalidateInAppContexts;
/// Call this methods to invalidate/reset the contexts set currently in the app.
/// \param appId MoEngage Account Identifier.
///
- (void)invalidateInAppContextsForAppId:(NSString * _Nullable)appId;
/// Method to set delegate for the inApp Callbacks for Default MoEngage instance.
/// \param delegate MoEngageInAppNative Delegate which will all the callbacks
///
- (void)setInAppDelegate:(id <MoEngageInAppNativeDelegate> _Nonnull)delegate;
/// Method to set delegate for the inApp Callbacks
/// \param delegate MoEngageInAppNativeDelegate which will all the callbacks
///
/// \param appId MoEngage Account Identifier.
///
- (void)setInAppDelegate:(id <MoEngageInAppNativeDelegate> _Nonnull)delegate forAppId:(NSString * _Nullable)appId;
/// Method to reset the inApp Delegate for Default Instance for Default MoEngage instance.
- (void)resetInAppDelegate;
/// Method to reset the inApp Delegate for Default Instance
/// \param appId MoEngage Account Identifier.
///
- (void)resetInAppDelegateForAppId:(NSString * _Nullable)appId;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
