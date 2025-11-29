@class NSString, PasswordLogic;

@interface VerifyQQPwdMgr : MMUserService <MMServiceProtocol, PasswordLogicDelegate, ICheckQQExt> {
    unsigned long long m_lastCanOldWTBufTime;
    PasswordLogic *m_pswLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)regExt;
- (void)unregExt;
- (id)init;
- (void)dealloc;
- (void)OnCheckQQ;
- (void)unknownFail:(id)a0;
- (void)verifyPasswordFail:(id)a0;
- (void)verifyPasswordOK:(id)a0 logic:(id)a1;
- (void)passwordLogicCancel:(id)a0;
- (void)passwordLogicStart:(id)a0;
- (void)passwordLogicPause:(id)a0;
- (void).cxx_destruct;

@end
