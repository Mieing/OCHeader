@class MMTimer, OpenLiteAppInfo, NSDictionary, NSString, MMLiteAppView;

@interface WSFinderMegaVideoContainerView : WSContainerBaseView

@property (retain, nonatomic) OpenLiteAppInfo *liteAppInfo;
@property (retain, nonatomic) MMLiteAppView *liteAppView;
@property (nonatomic) unsigned long long startCount;
@property (retain, nonatomic) MMTimer *cleanLiteAppTimer;
@property (nonatomic) BOOL needCreateContextId;
@property (nonatomic) unsigned long long enterTime;
@property (nonatomic) BOOL appearBySelectTab;
@property (copy, nonatomic) NSDictionary *createConfig;
@property (retain, nonatomic) NSString *curContextId;
@property (nonatomic) BOOL isCurWSWebView;

- (id)initWithConfig:(id)a0;
- (void)preDownloadLiteApp;
- (void)createPreloadStore;
- (void)preloadPageAction;
- (void)initViewIfNeed;
- (void)onQuitWSWebView:(BOOL)a0;
- (void)_cleanLiteApp;
- (void)onEnterWSWebView:(BOOL)a0;
- (void)onSwitchToOtherView:(id)a0;
- (void)onSwitchToThisView:(id)a0;
- (void)onContainerAppear;
- (void)onContainerDisAppear;
- (void)updateContextId;
- (void)dealloc;
- (int)commentScene;
- (void)reportEnter;
- (void)reportEventCode:(long long)a0;
- (void)checkShouldStartLiteApp;
- (void)reportExpose;
- (void)reportUnExpose:(BOOL)a0;
- (id)enterQueryDict;
- (void).cxx_destruct;

@end
