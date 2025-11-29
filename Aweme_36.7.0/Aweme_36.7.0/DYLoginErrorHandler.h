@interface DYLoginErrorHandler : NSObject

+ (void)showToastWithError:(id)a0;
+ (BOOL)handleError:(id)a0 platform:(unsigned long long)a1;
+ (id)errorMsgFromError:(id)a0;
+ (void)showConfirmAlertWithMessage:(id)a0;
+ (BOOL)handleError:(id)a0 platform:(unsigned long long)a1 isFromH5:(BOOL)a2;
+ (id)SSOLoginErrorMsgWithError:(id)a0 platform:(unsigned long long)a1;
+ (BOOL)handleForbidChangeErrorWithMessage:(id)a0;
+ (void)showAccountLockedMessage:(id)a0;
+ (id)defaultErrorTip;
+ (BOOL)handleAlertError:(id)a0;

@end
