@protocol MTLLibrary, MTLDevice, MTLCommandQueue;

@interface MAVMetalContext : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;
@property (retain, nonatomic) id<MTLLibrary> defaultLibrary;
@property (retain, nonatomic) id<MTLCommandQueue> defaultCommandQueue;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
