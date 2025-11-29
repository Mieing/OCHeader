@class NSString;
@protocol SettingModifyEmailLogicDelegate;

@interface SettingModifyEmailLogic : MMObject <PBMessageObserverDelegate, WCAccountSetPasswordViewControllerDelegate> {
    NSString *m_unbindOKTip;
}

@property (copy, nonatomic) id /* block */ bindEmailBlock;
@property (copy, nonatomic) id /* block */ checkUnbindBlock;
@property (copy, nonatomic) id /* block */ unbindEmailBlock;
@property (copy, nonatomic) id /* block */ sendVerifyEmailBlock;
@property (weak, nonatomic) id<SettingModifyEmailLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)bindEmail:(id)a0 success:(id /* block */)a1;
- (void)unbindEmail:(id /* block */)a0;
- (void)sendVerifyEmail:(id /* block */)a0;
- (void)startLoading;
- (void)stopLoading;
- (void)checkUnbind:(id /* block */)a0;
- (void)handleBindEmailResponse:(id)a0;
- (void)handleUnBindEmailResponse:(id)a0;
- (void)handleCheckUnbindResponse:(id)a0;
- (void)onSetPwd;
- (void)handleSendVerifyEmailResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)CgiFail:(id)a0;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void).cxx_destruct;

@end
