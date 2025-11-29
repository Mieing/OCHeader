@protocol MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue;

@interface ASFMetalContext : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;

+ (id)defaultContext;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;

@end
