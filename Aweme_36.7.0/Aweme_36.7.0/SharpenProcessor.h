@class MTKView;
@protocol MTLDevice, MTLLibrary, MTLBuffer, MTLRenderPipelineState;

@interface SharpenProcessor : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> mtlLibrary;
@property (retain, nonatomic) MTKView *mtkView;
@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float sharpness;
@property (nonatomic) float brightness;
@property (nonatomic) float contrast;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (retain, nonatomic) id<MTLBuffer> paramBuffer;

- (id)initWithDevice:(id)a0 mtlLibrary:(id)a1 mtkView:(id)a2 vertexBuffer:(id)a3 width:(float)a4 height:(float)a5 sharpness:(float)a6 brightness:(float)a7 contrast:(float)a8;
- (id)encodeWithTexture:(id)a0 rotation:(long long)a1 renderPassDescriptor:(id)a2 commandBuffer:(id)a3;
- (void).cxx_destruct;

@end
