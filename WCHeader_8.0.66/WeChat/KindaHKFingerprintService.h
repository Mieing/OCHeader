@class SoterSignHelper, NSString, MMVoidCallback, MMVoidStringStringStringCallback, SoterUpdateMPAuthKeyCgi;

@interface KindaHKFingerprintService : NSObject <SoterUpdateMPAuthKeyCgiDelegate, MMKHKFingerPrintService>

@property (retain, nonatomic) NSString *authResaon;
@property (retain, nonatomic) NSString *authChallenge;
@property (retain, nonatomic) SoterSignHelper *soterSignHelper;
@property (retain, nonatomic) SoterUpdateMPAuthKeyCgi *soterUpdateKeyCgi;
@property (retain, nonatomic) MMVoidStringStringStringCallback *succCallback;
@property (retain, nonatomic) MMVoidCallback *failCallback;
@property (retain, nonatomic) MMVoidCallback *cancelCallback;
@property (retain, nonatomic) MMVoidCallback *forgetPwdCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)supportBioType;
- (void)showBioAuthViewImpl:(id)a0 challenge:(id)a1 successEvent:(id)a2 failEvent:(id)a3 cancelEvent:(id)a4 forgetPwdEvent:(id)a5;
- (void)onSoterUpdateMPAuthKeyCgiOk;
- (void)onSoterUpdateMPAuthKeyCgiError;
- (void)handleAuthSucc:(id)a0;
- (id)resultJsonWithChallenge:(id)a0;
- (void)handleAuthFallback;
- (void)handleAuthCancel;
- (void)handleAuthFail;
- (void)releaseService;
- (long long)getFingerType;
- (id)getFingerPosition;
- (void)showFaceIdAuthDialogImpl:(id)a0 success:(id)a1 fail:(id)a2 cancel:(id)a3;
- (void)authenticateImpl:(id)a0 challenge:(id)a1 extra:(id)a2 success:(id)a3 fail:(id)a4 change2Pwd:(id)a5 showErrThenChange2Pwd:(id)a6;
- (void).cxx_destruct;

@end
