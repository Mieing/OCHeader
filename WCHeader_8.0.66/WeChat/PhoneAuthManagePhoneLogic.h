@class NSString;
@protocol PhoneAuthManagePhoneLogicDelegate, PhoneAuthManagePhoneLogicOperationDelegate;

@interface PhoneAuthManagePhoneLogic : MMObject <PBMessageObserverDelegate, MMTipsViewControllerDelegate>

@property (weak, nonatomic) id<PhoneAuthManagePhoneLogicDelegate> delegate;
@property (weak, nonatomic) id<PhoneAuthManagePhoneLogicOperationDelegate> operationDelegate;
@property (copy, nonatomic) NSString *appid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)sendConfirmCodeToPhoneNumber:(id)a0;
- (void)verifyCode:(id)a0 withPhoneNumber:(id)a1 saveFlag:(BOOL)a2;
- (void)addPhoneToSvrUsageList:(id)a0;
- (void)deletePhoneFromSvrUsageList:(id)a0;
- (void)updatePhoneToSvrWithPhoneNumber:(id)a0 type:(unsigned int)a1;
- (void)notifySendVerifyCodeFailMsg:(id)a0;
- (void)notifyCheckVerifyCodeFailMsg:(id)a0;
- (void)notifySendVerifyCodeSuccess;
- (void)notifyCheckVerifyCodeSuccess;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleSendCustomPhoneVerifyCodeResponse:(id)a0;
- (void)handleCheckVerifyCodeResponse:(id)a0;
- (void)handleUpdateUserPhoneResponse:(id)a0;
- (void).cxx_destruct;

@end
