@protocol MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue;

@interface LensMetalContext : NSObject

@property (retain, nonatomic) id<MTLDevice> mDevice;
@property (retain, nonatomic) id<MTLLibrary> mLibrary;
@property (retain, nonatomic) id<MTLCommandQueue> mCommandQueue;
@property (retain, nonatomic) id<MTLCommandBuffer> mCommandBuffer;

+ (id)defaultContext:(void *)a0 queue:(void *)a1 libPath:(id)a2 isUseSource:(BOOL)a3;

- (id)initWithDevice:(id)a0 queue:(id)a1 libPath:(id)a2 isUseSource:(BOOL)a3;
- (id)getCommandBuffer;
- (void)waitCommandBuffer;
- (void).cxx_destruct;
- (void)dealloc;

@end
