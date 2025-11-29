@interface IESECLoginManager : NSObject

+ (void)requireLogin:(id /* block */)a0;
+ (void)requireLoginIfUnableToLoginLater:(id /* block */)a0;
+ (void)requireLogin:(id /* block */)a0 withContext:(id)a1;
+ (BOOL)enableToLoginLater;
+ (void)requireLoginIfUnableToLoginLater:(id /* block */)a0 withContext:(id)a1;
+ (BOOL)isLogin;

@end
