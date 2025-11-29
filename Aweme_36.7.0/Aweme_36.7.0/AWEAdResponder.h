@class NSString;

@interface AWEAdResponder : HTSService <AWEAdResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWECommerceModuleServiceDOUYINHTSAdapterClass;

- (void)handleEvent:(id)a0 completion:(id /* block */)a1;
- (void)handleOpenURLLandingEvent:(id)a0 completion:(id /* block */)a1;
- (void)handleAuthorURLLandingEvent:(id)a0 completion:(id /* block */)a1;
- (void)handleWebURLLandingEvent:(id)a0 completion:(id /* block */)a1;
- (void)handleUniversalLinkOrWebURLLandingEvent:(id)a0 completion:(id /* block */)a1;
- (void)handleUniversalLinkEvent:(id)a0 completion:(id /* block */)a1;
- (void)handleURLsOrAppStoreLandingEvent:(id)a0;
- (void)handleRedPacketLandingEvent:(id)a0 completion:(id /* block */)a1;
- (void)handleFormPopupEvent:(id)a0 completion:(id /* block */)a1;
- (void)handlePopupEvent:(id)a0;
- (void)handleDSPAdAutolandingEvent:(id)a0;
- (void)tryEnterLiveWithSuccessBlock:(id /* block */)a0 failRoute:(id /* block */)a1 aweme:(id)a2;
- (void)tryEnterPersonalPageRoute:(id /* block */)a0;
- (void)tryOpenWechatMiniAppWithWechatModel:(id)a0 logInfo:(id)a1 aweme:(id)a2 failRoute:(id /* block */)a3 successRoute:(id /* block */)a4 completion:(id /* block */)a5;
- (void)trackClickButtonOneJumpOpenWechatWithAppInfo:(id)a0 logInfo:(id)a1 label:(id)a2 errorType:(id)a3;
- (BOOL)isWechatOpenTaskRunning;
- (void)showUnsupportedToast:(id)a0;
- (void)tryOpenCustomWebViewInFeedScene:(id)a0 completion:(id /* block */)a1;
- (void)executeTasks:(id)a0 aweme:(id)a1 event:(id)a2 completion:(id /* block */)a3;
- (void)makeSmartPhoneCallIfNeeded:(id)a0 event:(id)a1;
- (BOOL)shouldAddBTMForEcommerce:(id)a0;
- (id)openURLAppendBTMParamsWithEvent:(id)a0 openURL:(id)a1;
- (id)poiOpenURLAppendBTMParamsWithEvent:(id)a0 openURL:(id)a1 aweme:(id)a2;
- (void)trackECShopingActionWithEvent:(id)a0;
- (id)aAWECommerceModuleServiceDOUYINHTSAdapter;
- (BOOL)enableClueOpenInFeedList:(id)a0 openURL:(id)a1 isClueArea:(BOOL)a2;
- (void)transferToWebURLWithActivityPendant:(id)a0 event:(id)a1;
- (void)showPopupWithEvent:(id)a0;
- (id)getBtmWithEvent:(id)a0;
- (void)handleEvent:(id)a0;

@end
