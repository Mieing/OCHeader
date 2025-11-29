@interface AWEIMIdentityVerifyManager : NSObject

@property (nonatomic) BOOL isShowIdentityVerificationAlert;

+ (BOOL)shouldShowIndentityVerifyForCheckMessage:(id)a0;
+ (void)requestVerificationInfoComplete:(id /* block */)a0;
+ (BOOL)__shouldShowForeignNumberIndentityVerifyCode:(long long)a0 scene:(id)a1;
+ (void)__showForeignNumberIdentityVerify;
+ (void)showIndentityVerifyForCode:(long long)a0 scene:(id)a1;
+ (id)sharedManager;

- (void)showIndentityVerifyAlertType:(unsigned long long)a0;
- (void)showIndentityVerifyAlertType:(unsigned long long)a0 scene:(id)a1;
- (void)showTwiceIdentifyVerifyWithCheckMsg:(id)a0 completionBlock:(id /* block */)a1;
- (void)showIndentityVerifyIfNeedWithConversation:(id)a0 responseExtra:(id)a1 statusMsgDict:(id)a2;
- (void)identityVerificationTrackWithEvent:(id)a0 conversation:(id)a1 extra:(id)a2;
- (void)showIndentityVerifyAlertType:(unsigned long long)a0 title:(id)a1 content:(id)a2 scene:(id)a3 ticket:(id)a4 extra:(id)a5 confirmBlock:(id /* block */)a6 closeBlock:(id /* block */)a7;
- (void)showIndentityVerifyAlertType:(unsigned long long)a0 content:(id)a1 scene:(id)a2 ticket:(id)a3;
- (id)__alertTitleForType:(unsigned long long)a0;
- (id)__alertContentForType:(unsigned long long)a0;
- (id)__alertConfirmTitleForType:(unsigned long long)a0;
- (void)confirmActionForType:(unsigned long long)a0 scene:(id)a1 ticket:(id)a2 extra:(id)a3;

@end
