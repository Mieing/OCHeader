@protocol WXFileLoaderDelegate, WXWASMLogDelegate;

@interface WasmAdaptor : NSObject {
    struct OpaqueJSContext { } *_jscontext;
    struct WasmAdaptorBridge { void /* function */ **x0; void *x1; } *_adaptor;
    struct TWasmBindingModule { struct OpaqueJSContext *x0; BOOL x1; struct IWasmContext *x2; struct IWasmAdaptor *x3; struct IWasmGlueAdaptor *x4; } *_wasm_module;
}

@property (weak, nonatomic) id<WXFileLoaderDelegate> fileDelegate;
@property (weak, nonatomic) id<WXWASMLogDelegate> logDelegate;

+ (id)getBrotiData:(id)a0;

- (id)initWASMWithJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1;
- (void)setWebGLWasmAdaptor:(struct IWasmGlueAdaptor { void /* function */ **x0; } *)a0;
- (void)addTWasmLinker:(struct IWasmLinker { void /* function */ **x0; struct IWasmLinkerImpl *x1; } *)a0;
- (id)getFileData:(id)a0;
- (void)wasmNativeLog:(int)a0 log:(const char *)a1 target:(long long)a2;
- (void)releaseContext;
- (void)dealloc;
- (void).cxx_destruct;

@end
