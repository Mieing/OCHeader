@class NSString, MMLiteAppViewController, KindaLiteStateMachine, CameraScanViewController;
@protocol MMKJSEvent, MMUseCaseCallback;

@interface KindaLiteUseCase : MMUseCase <KindaLiteStoreDelegate, KindaLiteEffects>

@property (retain, nonatomic) id<MMUseCaseCallback> callbackBlock;
@property (retain, nonatomic) id<MMKJSEvent> jsEvent;
@property (weak, nonatomic) CameraScanViewController *cameraScanVC;
@property (weak, nonatomic) MMLiteAppViewController *liteAppVC;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) long long liteAppUuid;
@property (copy, nonatomic) NSString *useCaseUrl;
@property (nonatomic) BOOL hasInvokedCallback;
@property (nonatomic) BOOL discardedBeforeStart;
@property (copy, nonatomic) id /* block */ stopUseCaseCompletion;
@property (copy, nonatomic) id /* block */ stopTimeoutBlock;
@property (retain, nonatomic) KindaLiteStateMachine *fsm;
@property (readonly, nonatomic) long long liteAppState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preload;
+ (id)convertDictionaryToKvData:(id)a0;

- (void)dealloc;
- (void)start:(id)a0 data:(id)a1 callback:(id)a2;
- (void)stop:(id /* block */)a0;
- (void)startLiteApp:(id)a0 data:(id)a1;
- (void)onLiteAppCreate:(id)a0;
- (void)setLiteAppStore:(id)a0;
- (void)stopLiteApp;
- (void)onLiteAppStopped;
- (void)onLiteAppClosed;
- (void)onStartLiteAppFail;
- (void)onLiteAppRunning;
- (void)onLiteAppPaying;
- (void)onLiteAppPaySucceed;
- (void)fallbackCallback;
- (void)notify:(id)a0;
- (void)preStepDidDestory;
- (void)OnStoreDispatch:(id)a0 instanceId:(unsigned long long)a1 actionName:(id)a2 data:(id)a3 callbackId:(int)a4;
- (void)markDiscardedBeforeStart;
- (void)startNativeRoute:(id)a0 delay:(int)a1;
- (void)reportNativeStartUseCase:(id)a0;
- (void)reportStopKindaLiteUseCaseTimeout;
- (void)reportStopKindaLiteUseCaseSuccess;
- (void)effectStartLiteApp:(id)a0 data:(id)a1;
- (void)effectPublishStop;
- (void)effectOnLiteAppStopped;
- (void)effectOnLiteAppRunning;
- (void)effectOnLiteAppPaying;
- (void)effectOnLiteAppPaySucceed;
- (void).cxx_destruct;

@end
