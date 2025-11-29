@class NSDictionary, NSData, NSError, UILocalNotification, UIUserNotificationSettings;

@interface HTSNotificationContext : NSObject

@property (retain, nonatomic) NSError *registerError;
@property (retain, nonatomic) NSData *deviceToken;
@property (retain, nonatomic) NSDictionary *remoteUserInfo;
@property (copy, nonatomic) id /* block */ notificationResultHander;
@property (retain, nonatomic) UILocalNotification *localNotification;
@property (retain, nonatomic) UIUserNotificationSettings *settings;

- (void).cxx_destruct;

@end
