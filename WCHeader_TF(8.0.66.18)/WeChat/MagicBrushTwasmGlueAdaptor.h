@class WasmAdaptor;

@interface MagicBrushTwasmGlueAdaptor : NSObject

@property (weak, nonatomic) WasmAdaptor *wasmAdaptor;
@property (nonatomic) void *glueAdaptorImpl;

- (id)initWithWasmAdaptor:(id)a0;
- (void)bindTo:(id)a0;
- (void).cxx_destruct;

@end
