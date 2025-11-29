@class NSDictionary, NSString, UNNotificationTrigger;

@interface BDUGNotificationContent : NSObject

@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) UNNotificationTrigger *trigger;
@property (copy, nonatomic) NSString *categoryIdentifier;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *userText;
@property (copy, nonatomic) NSString *identifier;

+ (id)contentWithUserInfo:(id)a0 notificationTrigger:(id)a1 categoryIdentifier:(id)a2 actionIdentifier:(id)a3 userText:(id)a4 identifier:(id)a5;
+ (id)contentWithUserInfo:(id)a0 categoryIdentifier:(id)a1 actionIdentifier:(id)a2 userText:(id)a3;

- (void).cxx_destruct;

@end
