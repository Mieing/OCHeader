@class SoterUpdateMPAuthKeyCgi, NSString, SoterSignHelper;

@interface WAJSEventHandler_startSoterAuthentication : WAJSEventHandler_BaseEvent <SoterUpdateMPAuthKeyCgiDelegate>

@property (retain, nonatomic) SoterSignHelper *m_soterSignHelper;
@property (retain, nonatomic) SoterUpdateMPAuthKeyCgi *m_cgi;
@property (nonatomic) unsigned long long m_authMode;
@property (retain, nonatomic) NSString *m_challenge;
@property (retain, nonatomic) NSString *m_authContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)authModeToStr:(unsigned long long)a0;
- (unsigned long long)authModeStrToNum:(id)a0;
- (void)endEventWithErrorCode:(int)a0 errorMsg:(id)a1 useMode:(unsigned long long)a2 resultJson:(id)a3 resultSignature:(id)a4;
- (id)resultJsonWithChallenge:(id)a0;
- (void)endEventWithSignedResult;
- (void)endEventWithChallenge:(id)a0;
- (void)endEventUserCancelWithChallenge:(id)a0;
- (void)onSoterUpdateMPAuthKeyCgiOk;
- (void)onSoterUpdateMPAuthKeyCgiError;
- (void).cxx_destruct;

@end
