@protocol MTLDevice, MTLCommandBuffer, MTLLibrary, MTLCommandQueue;

@interface VHDRMetalContext : NSObject

@property (retain, nonatomic) id<MTLDevice> mDevice;
@property (retain, nonatomic) id<MTLLibrary> mLibrary;
@property (retain, nonatomic) id<MTLCommandQueue> mCommandQueue;
@property (retain, nonatomic) id<MTLCommandBuffer> mCommandBuffer;

+ (id)defaultContext:(void *)a0 libPath:(id)a1;

- (id)getCommandBuffer;
- (void)waitCommandBuffer;
- (id)initWithDevice:(id)a0 libPath:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
