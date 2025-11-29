@class WAAppTaskCapsuleMenu, NSString, WAPreloadAppTask, WACircleProgressLoadingViewController, WASimulatedNativeWeAppLoadingViewController;

@interface WAPreloadAppTaskMgr : MMUserService <MMServiceProtocol> {
    WAPreloadAppTask *_preloadTask;
}

@property (nonatomic) unsigned long long lastPreloadWebViewCheckAliveSuccessTimeStampInMs;
@property (retain, nonatomic) WACircleProgressLoadingViewController *cachedWeappLoading;
@property (retain, nonatomic) WASimulatedNativeWeAppLoadingViewController *cachedSimulatedNativeLoading;
@property (retain, nonatomic) WAAppTaskCapsuleMenu *cachedCapsuleMenu;
@property (nonatomic) BOOL preloadTaskTerminatedToAvoidBOOM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCloseClientPreload;
+ (unsigned int)preloadDegradeType;
+ (unsigned int)preloadInjectValueForPreloadMoment:(unsigned int)a0;
+ (unsigned int)preloadReportTypeForServicePreload:(unsigned int)a0 webViewPreload:(unsigned int)a1 silentOpen:(BOOL)a2;
+ (unsigned int)servicePreloadMomentFromPreloadType:(unsigned int)a0;

- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)giveBackPreloadAppTaskWebView:(id)a0;
- (void)timerCheckPreloadTaskIfNeeded;
- (void)checkPreloadWebViewAliveIfNeededShouldIgnoreGap:(BOOL)a0;
- (void)reportPreloadWebViewAliveFailed:(id)a0 subType:(unsigned long long)a1;
- (void)createPreloadAppTaskWebView:(unsigned int)a0;
- (void)createPreloadAppTaskService:(unsigned int)a0;
- (id)getPreloadTask;
- (void)detachCurrentPreloadTask;
- (void)releasePreloadTask;
- (void)releasePreloadTaskWaitQuit:(BOOL)a0;
- (void)releasePreloadWebView;
- (void)genNewPreloadTaskIfNoTask;
- (void)genNewPreloadTaskIfNoTaskByMoment:(unsigned int)a0;
- (void)genNewDegradePreloadTaskIfNoTask;
- (void)mainThread_genNewPreloadTaskIfNoTask:(unsigned int)a0;
- (void)preloadComponents:(unsigned int)a0;
- (void)preCreateLoading;
- (void)preCreateCapsuleMenu;
- (void)preCreateWeAppLoading;
- (void)preCreateSimulatedNativeLoading;
- (void)preCreateLaunchService;
- (void)genNewPreloadTaskWebViewIfNoTaskWebView;
- (void)genNewPreloadTaskWebViewIfNoTaskWebView:(unsigned int)a0;
- (void)genNewPreloadTaskServiceIfNoTaskService;
- (void)genNewPreloadTaskServiceIfNoTaskService:(unsigned int)a0;
- (id)getAndDettachPreloadCapsuleMenu;
- (id)getAndDettachPreloadCircleProgressLoadingViewController;
- (id)getAndDettachPreloadSimulatedNativeLoadingViewController;
- (void).cxx_destruct;

@end
