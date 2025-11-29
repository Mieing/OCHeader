@class IESLiveAnchorInteractiveGameItem, NSString, IESLiveGameOpenPlatformAppInstanceContext;
@protocol IESLiveGameOpenPlatformLauncher;

@interface IESLiveGameOpenPlatformAnchorAppInstance : IESLiveGameOpenPlatformAppInstance <IESLiveGameOpenPlatformAnchorAppInstance>

@property (retain, nonatomic) IESLiveAnchorInteractiveGameItem *gameItem;
@property (nonatomic) BOOL isTerminated;
@property (nonatomic) double startTimeInterval;
@property (nonatomic) BOOL isLaunching;
@property (nonatomic) BOOL isRunning;
@property (copy, nonatomic) NSString *oeSource;
@property (copy, nonatomic) NSString *searchWord;
@property (retain, nonatomic) IESLiveGameOpenPlatformAppInstanceContext *context;
@property (retain, nonatomic) id<IESLiveGameOpenPlatformLauncher> launcher;
@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly, nonatomic) BOOL isInRunning;
@property (readonly, nonatomic) BOOL isInActive;
@property (readonly, nonatomic) BOOL isInShareScreen;
@property (nonatomic) long long totalShowTime;
@property (nonatomic) BOOL shouldPause;
@property (nonatomic) unsigned long long appLaunchState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackStart:(id)a0;
- (void)openOpenPlatformGame:(id)a0 startParmaMap:(id)a1 launchResultBlock:(id /* block */)a2;
- (void)_bootstrapWithGameItem:(id)a0 source:(unsigned long long)a1;
- (void)_loadXPlayWithGameItem:(id)a0 source:(unsigned long long)a1 launchResultBlock:(id /* block */)a2;
- (void)_loadWithGameItem:(id)a0 source:(unsigned long long)a1 launchResultBlock:(id /* block */)a2;
- (BOOL)shouldUseNewOpenWay;
- (void)shutdownWithReason:(id)a0 completion:(id /* block */)a1;
- (void)_requestAppStopWithCallback:(id /* block */)a0;
- (void)shutdownXPlay:(id)a0 completion:(id /* block */)a1;
- (id)trackParams:(BOOL)a0 stopReason:(id)a1;
- (void)trackStop:(id)a0;
- (void)trackStartStopDuration:(id)a0;
- (void)trackScreenCast;
- (void)handleAfterBasicLaunchInfo:(BOOL)a0 schema:(id)a1 willStartTime:(double)a2 outerCallback:(id /* block */)a3 source:(id)a4;
- (void)_didFinishLaunchingWithResult:(BOOL)a0 schema:(id)a1 willStartTime:(double)a2 outerCallback:(id /* block */)a3 source:(id)a4;
- (void)_handleLaunchCallBackWithResult:(BOOL)a0 schema:(id)a1 completion:(id /* block */)a2;
- (void)_requestAppStartLogicWithSchema:(id)a0 requestAppStartCallback:(id /* block */)a1;
- (void)_handleFailLogicWithError:(id)a0;
- (void)_loadPanelContainerWithCompletion:(id /* block */)a0;
- (void)requestAppStartWithCallBack:(id /* block */)a0;
- (id)_getRequestAppStartExtraInfo;
- (unsigned long long)_launchSourceConversion:(unsigned long long)a0;
- (void)_handleAppStartApiSuccessCallbackWithResponse:(id)a0;
- (BOOL)isAnchorCustomServerStream:(id)a0;
- (void)checkSupportLiveScene;
- (void)trackAuthWithParams:(id)a0;
- (void)loadGameResourceWithGameItem:(id)a0 source:(unsigned long long)a1 launchResultBlock:(id /* block */)a2;
- (void)loadGameResourceWithGameItemFromIntroduction:(id)a0 source:(unsigned long long)a1 castScreenOn:(BOOL)a2 explainCardOn:(BOOL)a3 params:(id)a4;
- (id)trackerExtraFields:(id)a0;
- (void).cxx_destruct;
- (void)shutdownWithReason:(id)a0;
- (void)free;
- (void)receiveMessage:(id)a0;

@end
