@class WAShareAppMessageCommonParamsModel, WAShareAppMessageContextModel, NSString, WAShareAppMessageForwardLogicControllerComponent;

@interface WAOpenSDKJSEventHandler_shareAppMessage : WAOpenSDKJSEventHandler_BaseEvent <WAShareAppMessageForwardLogicControllerComponentDelegate>

@property (retain, nonatomic) WAShareAppMessageContextModel *shareContextModel;
@property (retain, nonatomic) WAShareAppMessageCommonParamsModel *paramsModel;
@property (retain, nonatomic) WAShareAppMessageForwardLogicControllerComponent *forwardLogicControllerComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)shareMsg:(id)a0 toContacts:(id)a1 forNativeWeApp:(BOOL)a2;
- (id)viewControllerForForwardLogicControllerToShow:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageCancel:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_ConfirmCanceled:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageException:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSelectSession:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_WeAppMessageSend:(id)a0 appMsgItem:(id)a1;
- (void)reportForwardMsg:(id)a0;
- (void).cxx_destruct;

@end
