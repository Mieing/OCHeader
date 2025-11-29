@class MMLoadingView, NSDictionary;

@interface WAJSEventHandler_openBizPublishImage : WAJSEventHandler_BaseEvent <BizTlPersonalCenterMgrRegisterExt>

@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) NSDictionary *dic;

- (void)handleJSEvent:(id)a0;
- (void)onGetBizFailed;
- (void)onGetBiz:(id)a0 initFlag:(BOOL)a1 banType:(unsigned int)a2;
- (BOOL)checkUseDraft;
- (void)onSelectPhotoFailed;
- (void)onOpenRegisterPage;
- (void)onOpenRegisterCanceled;
- (void)onStartLoadingView;
- (void)onStopLoadingView;
- (void)openMiniApp;
- (void)openPersonalCenterMiniAppPage:(id)a0 taskInfo:(id)a1;
- (id)makeHandlerWrapper;
- (id)generateOpenInfo:(id)a0;
- (id)generateTaskInfo:(id)a0;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
