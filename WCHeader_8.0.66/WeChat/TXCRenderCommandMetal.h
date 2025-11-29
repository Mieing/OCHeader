@class NSString, MTLRenderPassDescriptor;
@protocol MTLLibrary, MTLDevice, MTLRenderPipelineState;

@interface TXCRenderCommandMetal : NSObject

@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (nonatomic) unsigned long long pixelFormat;
@property (retain, nonatomic) id<MTLRenderPipelineState> pipelineState;
@property (copy, nonatomic) NSString *shaderSource;
@property (copy, nonatomic) NSString *vertexFunction;
@property (copy, nonatomic) NSString *fragmentFunction;
@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor;

- (id)initWithDevice:(id)a0 shaderSource:(id)a1 vertexFunction:(id)a2 fragmentFunction:(id)a3;
- (id)initWithDevice:(id)a0 pixelFormat:(unsigned long long)a1 shaderSource:(id)a2 vertexFunction:(id)a3 fragmentFunction:(id)a4;
- (BOOL)setupPipeline;
- (id)createNormalVerticesBuffer;
- (void)setupRenderPassDescriptorForTexture:(id)a0;
- (BOOL)render:(id)a0 outputTexture:(id)a1 execute:(id /* block */)a2;
- (void).cxx_destruct;

@end
