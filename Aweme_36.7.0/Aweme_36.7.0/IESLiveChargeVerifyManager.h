@interface IESLiveChargeVerifyManager : NSObject

+ (id)sharedManager;

- (void)goToVerifyWithSceneCodeString:(id)a0 Completion:(id /* block */)a1;
- (void)showSafeRemindAlertWithCompletion:(id /* block */)a0;
- (void)showSafeCheckboxViewWithCompletion:(id /* block */)a0;
- (void)arouseNewCertifyProcessWithScene:(id)a0 flow:(id)a1 ticket:(id)a2 completionBlock:(id /* block */)a3;
- (void)arouseNewFullAuthCertifyProcessWithScene:(id)a0 flow:(id)a1 ticket:(id)a2 withCompleteBlock:(id /* block */)a3;

@end
