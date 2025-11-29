@class NSNumber, MMTimer, NSMutableDictionary, GameWebDurationReport, GameSkStoreController, NSMutableArray, GameWebViewClientReportRecord;

@interface MMWebViewPlugin_GameCenter : MMWebViewPluginBase {
    BOOL _canStartRender;
    BOOL _hasCallInitEnd;
}

@property (nonatomic) BOOL didIgnoreTerminateReload;
@property (nonatomic) BOOL isDidCommit;
@property (retain, nonatomic) MMTimer *deadCheckTimer;
@property (nonatomic) double lastLiveCheckTime;
@property (nonatomic) BOOL waitLastResponse;
@property (retain, nonatomic) NSMutableArray *timeCheckDiffArray;
@property (nonatomic) BOOL hasCallClosed;
@property (nonatomic) BOOL isGameCenterRelateWebVC;
@property (retain, nonatomic) NSMutableDictionary *clientReportDict;
@property (retain, nonatomic) GameWebViewClientReportRecord *otherPageTimeRecorder;
@property (nonatomic) double otherPageStartTime;
@property (nonatomic) double otherPageRecordDuration;
@property (retain, nonatomic) NSNumber *needResumeSatusBarNumber;
@property (retain, nonatomic) GameWebDurationReport *webDurationReport;
@property (retain, nonatomic) GameSkStoreController *skStoreController;

- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)handleJsCoreEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)handleDurationReport:(unsigned long long)a0;
- (void)checkResumeStatusBar;
- (void)handleCloseOrMinimise:(BOOL)a0 dispatchEvent:(BOOL)a1;
- (void)stopTimer;
- (void)beginCheckWebViewDead;
- (void)handleEvaluateComplete:(id)a0 value:(id)a1 webViewInfo:(id)a2;
- (void)checkWebViewResponse;
- (BOOL)checkDeadAndReport:(BOOL)a0;
- (void)notifyEventToGuardManager:(unsigned long long)a0;
- (BOOL)canStartRender;
- (void)startGameCenterJsCore;
- (void)webviewDidReceiveScriptMessage:(id)a0 name:(id)a1;
- (void)gameSenceInjectJavaScript:(id)a0;
- (id)getPreInjectScript;
- (BOOL)checkVcArray:(id)a0 containsViewController:(id)a1;
- (BOOL)checkViewController:(id)a0 containsViewController:(id)a1;
- (BOOL)ignoreReloadWhenWebviewTerminate;
- (void)onTabVcPopWebView;
- (void)onDeallocOrPoped;
- (void)onReportOtherPageTime;
- (void)updateWebviewClientReport:(id)a0;
- (void)updateOtherPageTimeRecorder:(id)a0;
- (void)checkReport:(BOOL)a0;
- (void)onApplicationWillEnterForeground:(id)a0;
- (void)onApplicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
