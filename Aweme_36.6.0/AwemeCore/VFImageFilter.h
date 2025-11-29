@class NSString, NSArray, VFMetalContext;
@protocol MTLComputePipelineState, MTLTexture, MTLBuffer, MTLFunction;

@interface VFImageFilter : NSObject

@property (retain, nonatomic) id<MTLFunction> kernelFunction;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (nonatomic) NSString *str;
@property (retain, nonatomic) VFMetalContext *context;
@property (retain, nonatomic) id<MTLBuffer> uniformBuffer;
@property (retain, nonatomic) id<MTLComputePipelineState> pipeline;
@property (retain, nonatomic) NSArray *inTextures;
@property (retain, nonatomic) NSArray *outTextures;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadNum;

- (id)initWithFunctionName:(id)a0 context:(id)a1;
- (void)applyFilterWithTextures:(BOOL)a0;
- (void)applyFilterWithTextures:(BOOL)a0 height:(int)a1 width:(int)a2 commandBuffer:(id)a3 commandEncoder:(id)a4 enh:(float)a5;
- (void)applyFilterWithTextures:(BOOL)a0 height:(int)a1 width:(int)a2 commandBuffer:(id)a3 commandEncoder:(id)a4;
- (void)configureArgumentTableWithCommandEncoder:(id)a0;
- (void)applyFilterWithTextures;
- (void).cxx_destruct;

@end
