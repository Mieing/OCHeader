@class NSThread, NSMutableDictionary, JSContext, MBJSCRuntime;

@interface MBJSCJSBridgeImpl : NSObject

@property (retain, nonatomic) NSMutableDictionary *dicHandlers;
@property (nonatomic) long long handlerId;
@property (weak) NSThread *thread;
@property (nonatomic) struct HolderBase { void /* function */ **x0; unsigned int x1; struct OpaqueJSContext *x2; } *scriptState;
@property (nonatomic) unsigned long long extJsApiCallbackId;
@property (retain, nonatomic) NSMutableDictionary *extJsApiCallbackResults;
@property (retain, nonatomic) NSMutableDictionary *extJsApiAsyncCallbacks;
@property (retain, nonatomic) NSMutableDictionary *onEventCallbacksDict;
@property (readonly, weak, nonatomic) MBJSCRuntime *runtime;
@property (readonly, weak, nonatomic) JSContext *context;
@property (nonatomic) void *jsbridge;

- (id)initWithRuntime:(id)a0;
- (void)releaseContext;
- (void)dealloc;
- (id)invoke:(id)a0 params:(struct OpaqueJSValue { } *)a1 callback:(struct OpaqueJSValue { } *)a2 privateArgs:(struct OpaqueJSValue { } *)a3 exceptionState:(void *)a4;
- (void)on:(id)a0 callback:(struct OpaqueJSValue { } *)a1;
- (void)onEventFinish:(id)a0 param:(id)a1;
- (void)endWithResult:(unsigned long long)a0 result:(id)a1;
- (void).cxx_destruct;

@end
