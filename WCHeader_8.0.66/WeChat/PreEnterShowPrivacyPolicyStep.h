@class NSString, WCPrivacyPolicyControlLogic;

@interface PreEnterShowPrivacyPolicyStep : PreEnterBaseStep <WCPrivacyPolicyControlLogicDelegate, PBMessageObserverDelegate> {
    NSString *m_content;
    WCPrivacyPolicyControlLogic *m_privacyPolicyLogic;
    BOOL m_bSendChoice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXml:(id)a0;
- (void)dealloc;
- (void)startStep;
- (void)onWCPrivacyPolicyControlLogicClickAgree;
- (void)onWCPrivacyPolicyControlLogicClickDiagree;
- (void)sendPrivacyPolicyChoice:(BOOL)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
