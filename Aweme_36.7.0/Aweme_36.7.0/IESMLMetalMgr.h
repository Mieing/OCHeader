@class NSDictionary, MTLTextureDescriptor, MTKTextureLoader, CIContext;
@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState, MTLCommandQueue;

@interface IESMLMetalMgr : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLComputePipelineState> preProcessingPSO;
@property (retain, nonatomic) id<MTLComputePipelineState> postProcessingPSO;
@property (retain, nonatomic) id<MTLCommandQueue> mCommandQueue;
@property (retain, nonatomic) id<MTLBuffer> inputBuffer;
@property (retain, nonatomic) id<MTLBuffer> resultBuffer;
@property (retain, nonatomic) MTKTextureLoader *loader;
@property (retain, nonatomic) id<MTLLibrary> defaultLibrary;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (retain, nonatomic) id<MTLTexture> inputTexture;
@property (retain, nonatomic) MTLTextureDescriptor *textureDescriptor;
@property (retain, nonatomic) NSDictionary *textureOptions;
@property (retain, nonatomic) NSDictionary *imageOptions;
@property (retain, nonatomic) CIContext *ciContext;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } outputGroupSize;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } outputThreadgroupsPerGrid;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } inputThreadgroupsPerGrid;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } inputGroupSize;
@property (nonatomic) unsigned long long lastTextureWidth;
@property (nonatomic) unsigned long long lastTextureHeight;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } inputRegion;
@property (nonatomic) long long metalInitState;
@property (nonatomic) unsigned int *pointerMaxWidth;
@property (nonatomic) unsigned int *processPointerMaxWidth;
@property (nonatomic) unsigned long long originImageWidth;
@property (nonatomic) unsigned long long originImageHeight;
@property (nonatomic) unsigned long long maxWidth;
@property (nonatomic) unsigned long long maxHeight;

+ (id)shareManager;

- (void)setDefaultMatrix;
- (BOOL)prepareInner;
- (void)setupVar;
- (void)setInputThreadgroupsPerGridWithTexture:(id)a0;
- (id)getPSOWithFuncName:(id)a0;
- (id)imageFromData:(float *)a0 len:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)releaseResource;
- (id)init;
- (BOOL)prepare;
- (BOOL)prepareIfNeeded;
- (float *)dataFromImage:(id)a0;

@end
