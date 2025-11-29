@interface IESECLiveLoginUtil : NSObject

+ (void)forceLoginWithLiveContext:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
+ (id)getLoginContextWithLiveContext:(id)a0 userInfo:(id)a1;
+ (BOOL)isLogin;

@end
