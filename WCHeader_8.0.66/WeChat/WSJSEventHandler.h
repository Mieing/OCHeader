@class MMLoadingView, NSString, NSDictionary, MMUIViewController, FTSWebSearchMgr, WCCanvasDynamicDataLoader, NSMutableArray;
@protocol WSJSEventHandleDelegate;

@interface WSJSEventHandler : NSObject <WCCommentDetailViewControllerFBDelegate, WCCanvasDynamicDataLoaderDelegate, FTSJSEventDelegate>

@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSMutableArray *preloadVids;
@property (weak, nonatomic) MMUIViewController *baseViewController;
@property (weak, nonatomic) id<WSJSEventHandleDelegate> delegate;
@property (retain, nonatomic) FTSWebSearchMgr *webSearchMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)hideKeyboard;
- (void)onImagePreview:(id)a0;
- (void)onOpenSearchAssistance:(id)a0;
- (void)onUpdateReddotTimeStamps:(id)a0;
- (void)onFailReceiveJson;
- (void)onSearchInputChanged:(id)a0;
- (void)didFinishLoadWebView:(id)a0;
- (void)onJsbridgeReady:(id)a0;
- (void)onWebViewTerminal:(id)a0;
- (BOOL)viewControllerHasNavController;
- (void)onPreSearch:(id)a0 bizType:(unsigned long long)a1;
- (void)onLaunchDetailPage:(id)a0;
- (void)onMakePhoneCall:(id)a0;
- (void)onLaunchPage:(id)a0 withParams:(id)a1;
- (void)internalOnLaunchPage:(id)a0 withParams:(id)a1;
- (void)onOpenBrandContact:(id)a0 withParams:(id)a1;
- (void)onOpenMsgSession:(id)a0;
- (void)onOpenSnsDetail:(id)a0;
- (void)onOpenContact:(id)a0;
- (void)onClickRecmdWord:(id)a0;
- (void)onRequestLocalSuggestion:(id)a0;
- (void)onOpenTransparentWeApp:(id)a0;
- (void)onOpenWeAppPage:(id)a0;
- (void)onOpenWeAppPage:(id)a0 privateParams:(id)a1;
- (void)onOpenEmotionPage:(id)a0;
- (void)onSwitchSearchContext:(id)a0;
- (id)onGetBaseViewController;
- (void)onReportWeAppSearchRealTime:(id)a0;
- (void)onGoToRecVideoList:(id)a0 webview:(id)a1;
- (void)onWebViewRenderFinish:(id)a0;
- (void)onOpenWowColikeSetting:(id)a0;
- (void)onPreloadVideo:(id)a0;
- (void)onSetSearchTagResult:(id)a0;
- (void)onAppendSearchTagQuery:(id)a0;
- (void)onLaunchApplication:(id)a0;
- (void)onUxCanvasDynamicXMLReturn:(id)a0 error:(int)a1 forCanvasId:(id)a2;
- (void)onDeleteData;
- (void).cxx_destruct;

@end
