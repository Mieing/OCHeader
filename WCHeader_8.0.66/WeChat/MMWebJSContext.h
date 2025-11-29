@class WasmAdaptor, NSString, MMWebJsTimerHandler, JSContext, NSThread, NSObject;
@protocol OS_dispatch_queue, MMWebJSContextWasmDelegate;

@interface MMWebJSContext : NSObject <WXWASMLogDelegate, WXFileLoaderDelegate>

@property (retain, nonatomic) JSContext *jsContext;
@property (retain, nonatomic) MMWebJsTimerHandler *timerHandler;
@property (retain, nonatomic) WasmAdaptor *wasmAdaptor;
@property (nonatomic) BOOL isWasmInit;
@property (copy, nonatomic) id /* block */ exceptionHandler;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSThread *subThread;
@property (weak, nonatomic) id<MMWebJSContextWasmDelegate> wasmDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJVM:(id)a0 name:(id)a1;
- (id)initWithJVM:(id)a0 name:(id)a1 workQueue:(id)a2;
- (void)dealloc;
- (id)evaluateScript:(id)a0;
- (id)evaluateScript:(id)a0 withSourceURL:(id)a1;
- (void)enableWasm;
- (void)releaseWasm;
- (void)invalidAllTimers;
- (void)addExceptionHandler;
- (void)addConsoleLogHandler;
- (void)addTimerhandler;
- (void)logError:(id)a0 target:(long long)a1;
- (void)logInfo:(id)a0 target:(long long)a1;
- (void)logWarning:(id)a0 target:(long long)a1;
- (void)logDebug:(id)a0 target:(long long)a1;
- (id)getFileData:(id)a0;
- (void).cxx_destruct;

@end
