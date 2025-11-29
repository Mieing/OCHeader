@class JSEvent, NSDictionary, MMLoadingView;

@interface WebviewJSEventHandler_openBizPublishImage : WebviewJSEventHandlerBase <BizTlPersonalCenterMgrRegisterExt>

@property (retain, nonatomic) JSEvent *bizPublishImageEvent;
@property (retain, nonatomic) NSDictionary *dic;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (nonatomic) double lastClickTime;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onGetBizFailed;
- (void)onGetBiz:(id)a0 initFlag:(BOOL)a1 banType:(unsigned int)a2;
- (id)makeHandlerWrapper;
- (BOOL)checkUseDraft;
- (void)onSelectPhotoFailed;
- (void)onOpenRegisterPage;
- (void)onOpenRegisterCanceled;
- (void)onStartLoadingView;
- (void)onStopLoadingView;
- (void)openMiniApp;
- (id)generateOpenInfo:(id)a0;
- (id)generateTaskInfo:(id)a0;
- (void)openPersonalCenterMiniAppPage:(id)a0 openInfo:(id)a1 taskInfo:(id)a2;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
