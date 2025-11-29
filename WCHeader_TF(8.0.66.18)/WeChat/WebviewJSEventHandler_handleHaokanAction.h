@interface WebviewJSEventHandler_handleHaokanAction : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (BOOL)checkDataShouldBeDispatchWithAction:(id)a0;
- (BOOL)actionIsLegal:(id)a0;
- (void)onHandleIsHaoKanSwitchOn:(id)a0;
- (void)onHandleTurnOnHaoKanSwitch;
- (void)onHandleUpdateRecommendStatus:(id)a0;
- (void)onShareToGoodLook:(id)a0;
- (void)openHaoKanSettingsPage:(id)a0;
- (void)onCheckSyncHanKanPermission:(id)a0;
- (void)onCheckSyncCommentPermission:(id)a0;
- (void)cacheHaokanShareSource:(id)a0;
- (void)onHandleCommonShareRecommendCommentAction:(id)a0 event:(id)a1;
- (void)onHandleCommonShareRecommendCloseCommentAction:(id)a0;
- (void)openRecommendPage:(id)a0;
- (void)onHandleJumpToWowAction:(id)a0;
- (void)asyncHandle_callbackEvent:(id)a0 result:(id)a1;

@end
