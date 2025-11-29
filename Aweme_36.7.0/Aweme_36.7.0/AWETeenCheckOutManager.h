@interface AWETeenCheckOutManager : NSObject

+ (void)requestParentPhoneNumberCompletion:(id /* block */)a0;
+ (void)beginVerifyCodeWithCompletion:(id /* block */)a0;
+ (void)requestVerifyCodeWithType:(id)a0 completion:(id /* block */)a1;
+ (void)checkVerifyCode:(id)a0 completion:(id /* block */)a1;
+ (long long)smsCountdown;

@end
