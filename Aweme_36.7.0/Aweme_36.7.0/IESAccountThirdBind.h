@interface IESAccountThirdBind : NSObject

+ (void)thirdBindWithPlatform:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)thirdUnbindWithPlatform:(unsigned long long)a0 completion:(id /* block */)a1;
+ (id)stringValueForAccountPlatformName:(unsigned long long)a0;
+ (void)_handleError:(id)a0 isForBind:(BOOL)a1 platform:(unsigned long long)a2;
+ (void)thirdBindWithOAuthInfo:(id)a0 platform:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)bindOpenURL:(id)a0;
+ (void)showAlertWithTitle:(id)a0 message:(id)a1;

@end
