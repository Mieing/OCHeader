@class NSDictionary;

@interface UASDKLogin : NSObject

@property (readonly, nonatomic) NSDictionary *networkInfo;

+ (id)shareLogin;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)printConsoleEnable:(BOOL)a0;
- (BOOL)validateRegisterMethodImplement;
- (void)registerAppId:(id)a0 appKey:(id)a1 encrypType:(id)a2;
- (void)getPhoneNumberCompletion:(id /* block */)a0;
- (void)getAuthorizationCompletion:(id /* block */)a0;
- (void)mobileAuthCompletion:(id /* block */)a0;
- (BOOL)delectScrip;
- (void)setTimeoutInterval:(double)a0;

@end
