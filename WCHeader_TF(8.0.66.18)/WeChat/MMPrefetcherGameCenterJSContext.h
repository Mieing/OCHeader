@class NSMutableDictionary, JSContext, NSThread, JSVirtualMachine, NSString, GameCenterJSEventLogicHandler;

@interface MMPrefetcherGameCenterJSContext : MMObject <GameCenterJSEventLogicHandlerDelegate, WCMainWindowExt>

@property (retain, nonatomic) JSContext *jsContext;
@property (retain, nonatomic) JSVirtualMachine *jsVirtualMachine;
@property (retain) NSMutableDictionary *timerObjs;
@property (retain) NSThread *thread;
@property (retain, nonatomic) GameCenterJSEventLogicHandler *jsEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSVM:(id)a0;
- (void)startServerThread;
- (void)runThread:(id)a0;
- (void)setupJSErrorHandler;
- (void)initJsApi;
- (void)attachNativeMethod;
- (void)setupJsApiInvoke:(id)a0;
- (void)setupTimerHandler:(id)a0;
- (unsigned int)addTimer:(unsigned int)a0 withTime:(float)a1 isRepeat:(BOOL)a2;
- (void)onTimer:(id)a0;
- (void)injectSystemInfo;
- (void)injectJsbridge;
- (void)injectPublicLib;
- (void)evaluateScript:(id)a0;
- (void)evaluate:(id)a0;
- (void)changeState:(id)a0;
- (id)getNetType;
- (void)destroy;
- (void)stopThread;
- (void)releaseJsContext;
- (void)processCallbackFromNative:(id)a0 callbackId:(id)a1;
- (void)mm_traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
