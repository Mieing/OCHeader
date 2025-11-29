@class SoterSignHelper, NSString, JSEvent, SoterUpdateMPAuthKeyCgi;

@interface WebviewJSEventHandler_reqSoterAuthentication : WebviewJSEventHandlerBase <SoterUpdateMPAuthKeyCgiDelegate>

@property (retain, nonatomic) JSEvent *m_event;
@property (retain, nonatomic) SoterSignHelper *m_soterSignHelper;
@property (retain, nonatomic) SoterUpdateMPAuthKeyCgi *m_cgi;
@property (nonatomic) unsigned long long m_authMode;
@property (retain, nonatomic) NSString *m_challenge;
@property (retain, nonatomic) NSString *m_authContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)endEventWithErrorCode:(int)a0 errorMsg:(id)a1 useMode:(unsigned long long)a2 resultJson:(id)a3 resultSignature:(id)a4 Event:(id)a5;
- (void)endEventWithErrorCode:(int)a0 errorMsg:(id)a1 useMode:(unsigned long long)a2 resultJson:(id)a3 resultSignature:(id)a4 bioData:(id)a5 Event:(id)a6;
- (id)resultJsonWithChallenge:(id)a0;
- (void)endEventWithSignedResult:(id)a0;
- (void)endEventWithChallenge:(id)a0;
- (void)endEventUserCancelWithChallenge:(id)a0;
- (void)onSoterUpdateMPAuthKeyCgiOk;
- (void)onSoterUpdateMPAuthKeyCgiError;
- (void).cxx_destruct;

@end
