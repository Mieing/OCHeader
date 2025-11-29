@class NSDictionary, NSString;

@interface HTSHandleNotificationContext : NSObject

@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *userText;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isColdLaunch;

- (id)initWithUserInfo:(id)a0 categoryIdentifier:(id)a1 actionIdentifier:(id)a2 userText:(id)a3 identifier:(id)a4 isColdLaunch:(BOOL)a5;
- (void).cxx_destruct;

@end
