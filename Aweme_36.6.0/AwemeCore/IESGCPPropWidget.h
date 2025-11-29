@class IESGCPPropBridgeSubscriber, IESGCPPropDataAuthAPI, NSString;

@interface IESGCPPropWidget : IESGCPBaseWidget <IESGCPPropRouter>

@property (retain, nonatomic) IESGCPPropBridgeSubscriber *bridgeSubscriber;
@property (retain, nonatomic) IESGCPPropDataAuthAPI *authAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)widgetBindService;
- (void)openSchemaWithSchema:(id)a0;
- (void)checkConsentPrivacyAgreementWithCompletion:(id /* block */)a0;
- (void)openPropUserProtocolPage;
- (void)openPropPrivateProtocolPage;
- (void)hideLandscapePanelsIfNeeded:(id /* block */)a0;
- (void)openPropRankAuthorizationViewIfNeed;
- (void)trackUserAlertWithEvent:(id)a0;
- (id)propRankAuthorizationViewShownKey;
- (void)openPropRankAuthorizationProtocolPage;
- (BOOL)checkConsentPrivacyAgreementWithConsentedCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
