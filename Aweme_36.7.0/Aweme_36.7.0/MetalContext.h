@protocol MTLLibrary, MTLDevice, MTLCommandQueue;

@interface MetalContext : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLLibrary> defaultLibrary;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;

+ (int)getThreadsPerThreadgroup:(id)a0 dimension:(int)a1 result:(unsigned long long *)a2;
+ (id)sharedInstance;

- (id)createComputePipelineState:(id)a0 multipleOfExecutionWidth:(BOOL)a1;
- (id)createBuffer:(const void *)a0 size:(unsigned long long)a1 option:(unsigned long long)a2 copy:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
