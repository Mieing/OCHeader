@class NSString, NSDictionary, JSShareFBLogicHelper;

@interface WebviewJSEventHandler_shareFB : WebviewJSEventHandlerBase <JSShareFBLogicHelperDelegate, FacebookViewControllerDelegate, IMMFacebookMgrExt> {
    JSShareFBLogicHelper *m_jsShareFBHelper;
    NSDictionary *m_eventParamsDic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)showConfirmView;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)onExtendTokenFinish:(BOOL)a0;
- (void)onJSShareFBSharing;
- (void)onJSShareFBFinished;
- (void)onJSShareFBFailedWithError:(int)a0 msg:(id)a1;
- (void)onBindFacebook;
- (void)OnFacebookBinded;
- (id)getViewController;
- (void).cxx_destruct;

@end
