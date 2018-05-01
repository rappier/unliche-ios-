//
//  UnlicheManager.h
//  Unliche
//
//  Created by rappiermac on 8/5/17.
//  Copyright © 2017 rappiermac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface UnlicheManager : NSObject

/*
 Set the Access token to initialize Unliche SDK
 */
+(void)initializeWithUnlicheAccessToken:(NSString*)accessToken withAppStoreId:(NSUInteger)appID;

/*
 To track any custom event call trackEventWithEventId: method and pass the event id which you want to track, each custom event will have the unique integer id
 */
+(void)trackEventWithEventId:(NSUInteger)eventId;

/*
 To track any custom event call trackEventWithEventId:withAdditionalParams: method and pass the event id which you want to track, each custom event will have the unique integer id and pass the additional required params in an dict for the event
 */
+(void)trackEventWithEventId:(NSUInteger)eventId withAdditionalParam1:(NSString*)param1 andParam2:(NSString*)param2 andParam3:(NSString*)param3 andParam4:(NSString*)param4 andParam5:(NSString*)param5;

/*
 To track Purchase event call trackPurchaseEvent
 */
+(void)trackPurchaseEventWithPurchaseAmount:(NSUInteger)amount andPurchaseCurrency:(NSString*)currency andPaymentGateway:(NSString*)paymentGateway;

/*
 To track Open event call trackOpenEvent, this will track the app launch event everytime app opens
 */
+(void)trackOpenEvent;

/*
 To set Username of the current user in the app (Optional)
 */
+(void)setUserName:(NSString*)username;

/*
 To set User ID of the current user in the app (Optional)
 */
+(void)setUserID:(NSString*)userID;

/*
 To set Phone number of the current user in the app (Optional)
 */
+(void)setPhoneNumber:(NSString*)phonenumber;

/*!
 Gets the current device token for push notifications.
 
 NOTE: This should be called after application:didRegisterForRemoteNotificationsWithDeviceToken: finishes. If called before it will be nil.
 
 @return device token, nil if there isn't one
 */
+ (NSString *)getPushToken;

/*
 Set the current device token for push notifications.
 
 NOTE: Call this method in application:didRegisterForRemoteNotificationsWithDeviceToken: .
 */
+ (void)application:(UIApplication *)application unlicheDidRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

/*
 Set the notification error if its fails for push notifications.
 
 NOTE: Call this method in application:tuneDidFailToRegisterForRemoteNotificationsWithError: .
 */
+ (void)application:(UIApplication *)application unlicheDidFailToRegisterForRemoteNotificationsWithError:(NSError *)error;

@end
