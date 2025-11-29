@class NSMutableDictionary, JITRuntime, NSMutableSet, NSString, JITRuntimeView;

@interface MBJITRuntime : MBRuntime <JITRuntimeDelegate, JITRuntimeJsApiHandlerDelegate, JITRuntimeDataTransferDelegate>

@property (retain, nonatomic) JITRuntime *jitRuntime;
@property (weak, nonatomic) JITRuntimeView *runtimeView;
@property (retain, nonatomic) NSMutableDictionary *dicHandlers;
@property BOOL isWKTerminated;
@property (retain, nonatomic) NSMutableDictionary *extJsApiCallbackResults;
@property (retain, nonatomic) NSMutableSet *extJsApiAsyncCallbacks;
@property (retain, nonatomic) NSString *fsScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)createView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)destroyRuntime;
- (void)pause;
- (void)resume;
- (id)createObject;
- (id)createObject:(id)a0;
- (void)evaluateScript:(id)a0 sourceURL:(id)a1;
- (void)evaluateScript:(id)a0 sourceURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)onEventFinish:(id)a0 param:(id)a1;
- (void)endWithResult:(unsigned long long)a0 result:(id)a1;
- (void)noitfyCanvasCreated:(unsigned int)a0;
- (void)onLoad:(id)a0 jitRuntimeView:(id)a1;
- (void)injectLibs;
- (void)onTerminate;
- (void)invokeJsApiCallback:(unsigned int)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processInvokeHandler:(id)a0 param:(id)a1 callbackId:(unsigned int)a2;
- (void)onXHRRequest:(id)a0;
- (void)endWithHandler:(id)a0 result:(id)a1 callback:(id)a2;
- (id)createJSObject:(id)a0;
- (void)runCodeInJsThread:(id /* block */)a0;
- (void)runCodeInJsThreadSync:(id /* block */)a0;
- (id)getFileData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFrame;
- (void).cxx_destruct;

@end
