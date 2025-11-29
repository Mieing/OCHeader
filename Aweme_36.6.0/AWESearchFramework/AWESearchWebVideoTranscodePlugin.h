@class NSString, DUXInfoPanel, DUXBasicSheet, NSDictionary, BDXWebView, AWESearchSynthesisVideoPlayer, NSObject, UIResponder, AWESearchWebVideoTranscodeTimeMonitor, AWESearchWebViewTranscodingManager;

@interface AWESearchWebVideoTranscodePlugin : IWKPluginObject <DUXSheetDelegate, AWESearchSynthesisVideoPreloadObserver, AWESearchSynthesisVideoPlayerDelegate, IWKInstancePlugin, UIGestureRecognizerDelegate>

@property (weak, nonatomic) BDXWebView *webView;
@property (retain, nonatomic) AWESearchWebViewTranscodingManager *transcodingManager;
@property (retain, nonatomic) DUXBasicSheet *ip_infoPanelSheet;
@property (retain, nonatomic) DUXInfoPanel *ip_infoPanel;
@property (nonatomic) long long originStatusBarOrientation;
@property (nonatomic) BOOL isOrientationChangedForWebview;
@property (nonatomic) BOOL isReturnToOrigin;
@property (nonatomic) BOOL dataUpdated;
@property (retain, nonatomic) AWESearchSynthesisVideoPlayer *player;
@property (copy, nonatomic) id /* block */ videoTranscodeJumpNewVideoPage;
@property (copy, nonatomic) id /* block */ videoTranscodeWebViewFinishLoad;
@property (copy, nonatomic) NSString *serverVideoTranscodingData;
@property (copy, nonatomic) NSString *transcodingVideoResult;
@property (copy, nonatomic) NSString *transcodingVideoAddressResult;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSObject *monitorContext;
@property (copy, nonatomic) NSString *subPageType;
@property (nonatomic) BOOL isDetailPage;
@property (nonatomic) BOOL usePreloadedData;
@property (nonatomic) BOOL isFirstTranscode;
@property (nonatomic) long long transcodeDataInjectTime;
@property (nonatomic) long long transcodeSource;
@property (retain, nonatomic) AWESearchWebVideoTranscodeTimeMonitor *timeMonitor;
@property (retain, nonatomic) UIResponder *originalWeb;
@property (copy, nonatomic) NSString *originUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableH5PlayerReplacedByNative;
+ (BOOL)searchTranscodeVideoTooltipAb;
+ (BOOL)geckoControlBackup;
+ (id)transcodingVideoGeckoBundleConfig;

- (void)sheetDidClickCloseButton:(id)a0;
- (id)webViewWillDealloc:(id)a0;
- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 loadData:(id)a1 MIMEType:(id)a2 characterEncodingName:(id)a3 baseURL:(id)a4;
- (id)webView:(id)a0 loadHTMLString:(id)a1 baseURL:(id)a2;
- (void)orientationRotateTo:(long long)a0;
- (void)playerAreaClicked;
- (void)playerFirstFrameLoad;
- (void)didFinishPreloadUrl:(id)a0 isSuccess:(BOOL)a1 data:(id)a2;
- (void)reportTranscodeResultWithRequestUrl:(id)a0 Code:(long long)a1;
- (void)registerWebTranscodeJSBridge;
- (void)stopTranscodeProcess:(id)a0;
- (void)performTranscoding;
- (void)updateTranscodeData:(id)a0 dataSource:(long long)a1 pageType:(id)a2;
- (void)reportShow;
- (void)ip_showInfoPanel;
- (void)ip_clickCloseTransCodeButton;
- (void)ip_clickSaveTransCodeButton;
- (void)returnToOriginalWeb;
- (void)recordTimeMonitorWithCompletion:(id /* block */)a0;
- (void)asyncLoadVideoTranscodingWithCompletion:(id /* block */)a0;
- (id)currentPlayUrl;
- (void)setScreenDirection;
- (void)restoreScreenDirection;
- (id)monitorTrackParams;
- (void)reportWithType:(id)a0;
- (void)reportPageClickWithType:(id)a0;
- (void)stoppedPlayer;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (id)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)onLoad:(id)a0;
- (void)turnOff;

@end
