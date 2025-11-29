@class NSMutableDictionary, JSContext, NSThread, JSVirtualMachine, NSString, GameCenterJSEventLogicHandler;

@interface GameCenterJsService : MMObject <CNetworkStatusExt, WCMainWindowExt> {
    GameCenterJSEventLogicHandler *_jsEventHandler;
}

@property (retain, nonatomic) JSContext *jsContext;
@property (retain, nonatomic) JSVirtualMachine *jsVirtualMachine;
@property (retain) NSMutableDictionary *timerObjs;
@property (retain) NSThread *thread;
@property (retain, nonatomic) NSString *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startServerThread;
- (void)runThread:(id)a0;
- (void)dealloc;
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
- (void)evaluateScript:(id)a0 scriptName:(id)a1;
- (void)executeBlock:(id /* block */)a0;
- (void)changeState:(id)a0;
- (id)getNetType;
- (void)destroy;
- (void)stopThread;
- (void)releaseJsContext;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)onSimCardNetTypeChange;
- (void)mm_traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
