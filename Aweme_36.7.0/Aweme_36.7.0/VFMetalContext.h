@protocol MTLLibrary, MTLDevice, MTLCommandQueue;

@interface VFMetalContext : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;

- (void)Release;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;

@end
