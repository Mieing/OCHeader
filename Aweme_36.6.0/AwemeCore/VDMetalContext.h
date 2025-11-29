@protocol MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue;

@interface VDMetalContext : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;

+ (id)instanceDeafultDeviceKernels:(id)a0;

- (id)initWithDevice:(id)a0 Kernels:(id)a1;
- (void).cxx_destruct;

@end
