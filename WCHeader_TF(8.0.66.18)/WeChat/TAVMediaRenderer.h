@class NSString, MTLRenderPassDescriptor, TAVMediaMetalView;
@protocol MTLTexture, MTLBuffer, MTLRenderPipelineState;

@interface TAVMediaRenderer : NSObject <MTKViewDelegate>

@property (retain, nonatomic) id<MTLRenderPipelineState> renderPipelineState;
@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor;
@property (retain, nonatomic) id<MTLTexture> inputTexture;
@property (retain, nonatomic) id<MTLBuffer> positionBuffer;
@property (retain, nonatomic) id<MTLBuffer> textureCoordinateBuffer;
@property (retain, nonatomic) TAVMediaMetalView *metalView;
@property (nonatomic) struct CGSize { double width; double height; } textureSize;
@property (nonatomic) BOOL firstFrameDidAppear;
@property (copy, nonatomic) id /* block */ firstFrameAppearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertPixelBuffer:(struct __CVBuffer { } *)a0;

- (id)initWithMetalKitView:(id)a0;
- (void)updatePixelBuffer:(struct __CVBuffer { } *)a0;
- (void)refreshMetalView;
- (void)drawInMTKView:(id)a0;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
