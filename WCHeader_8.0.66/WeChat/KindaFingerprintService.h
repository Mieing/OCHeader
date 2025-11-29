@class NSString, WCPayBioPayV2UpdateAuthKeyCgi;

@interface KindaFingerprintService : NSObject <WCPayBioPayV2UpdateAuthKeyCgiDelegate, MMKFingerprintService>

@property (retain, nonatomic) WCPayBioPayV2UpdateAuthKeyCgi *updateAuthKeyCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryInitBiometricImpl:(id)a0;
- (long long)supportBioType;
- (void)authenticateImpl:(id)a0 challenge:(id)a1 success:(id)a2 fail:(id)a3 change2Pwd:(id)a4 showErrThenChange2Pwd:(id)a5;
- (void)releaseService;
- (void)reGenFpRsaKeyImpl:(BOOL)a0 fid:(int)a1 reqKey:(id)a2 success:(id)a3 fail:(id)a4;
- (void)showFaceIdAuthDialogImpl:(id)a0 success:(id)a1 fail:(id)a2 cancel:(id)a3;
- (void)userCancel;
- (void)setNeedChangeAuthKey:(BOOL)a0;
- (BOOL)isNeedChangeAuthKey;
- (void)changeAuthKey:(BOOL)a0 isPayOk:(BOOL)a1 pwd:(id)a2;
- (void)showBioAuthViewImpl:(id)a0 challenge:(id)a1 successEvent:(id)a2 failEvent:(id)a3 cancelEvent:(id)a4 forgetPwdEvent:(id)a5;
- (void)authenticateImpl:(id)a0 challenge:(id)a1 extra:(id)a2 success:(id)a3 fail:(id)a4 change2Pwd:(id)a5 showErrThenChange2Pwd:(id)a6;
- (id)getFingerPosition;
- (long long)getFingerType;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiResponseOK:(id)a0;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void).cxx_destruct;

@end
