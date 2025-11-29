@class AWEUserConfiguration, AWEUserModel;

@interface AWEUserPassport : NSObject

@property (retain, nonatomic) AWEUserConfiguration *configuration;
@property (retain) AWEUserModel *user;

+ (id)persistUser:(id)a0;
+ (id)logoutFrom:(id)a0;
+ (id)loginWithTicket:(id)a0;
+ (id)passport;
+ (id)clearUser;
+ (void)onLaunch:(id)a0;
+ (id)config;
+ (id)currentUser;
+ (BOOL)isLogin;

- (void).cxx_destruct;
- (id)init;

@end
