@class TXCMetalContext, NSString;
@protocol MTLFunction, MTLDevice, MTLComputePipelineState, MTLLibrary, MTLBuffer, MTLCommandQueue;

@interface TXCPixelTransferSessionMetalImpl : NSObject <TXCPixelTransferSession> {
    struct vImage_ARGBToYpCbCr { unsigned char opaque[128]; } _vImageColorConversionInfo;
    BOOL _vImageColorConInitialized;
}

@property (retain, nonatomic) id<MTLDevice> metalDevice;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLBuffer> colorConversionBuffer;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) struct __CVMetalTextureCache { } *metalTextureCache;
@property (retain, nonatomic) id<MTLFunction> kernelFunc;
@property (retain, nonatomic) id<MTLComputePipelineState> computePipelineState;
@property (retain, nonatomic) TXCMetalContext *metalContext;
@property (nonatomic) struct __CFString { } *colorConversionMartixKey;
@property (nonatomic) BOOL colorConversionFullRange;
@property (nonatomic) BOOL enableColorConversion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMetalContext:(id)a0;
- (void)dealloc;
- (BOOL)setupMetal;
- (void)setupKernelFunc:(id)a0;
- (BOOL)updateColorConversionPropertyIfNeed:(struct __CVBuffer { } *)a0;
- (BOOL)setupMetalColorConversion:(struct __CVBuffer { } *)a0;
- (void)setupCommandBuffer:(id)a0 inputTexutres:(id)a1 outputTexutres:(id)a2 outputsize:(struct CGSize { double x0; double x1; })a3;
- (void)metalTransferMetalTexute:(id)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (BOOL)metalTransferPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (BOOL)setupvImageColorConversion:(struct __CVBuffer { } *)a0;
- (void)vImageTransferARGBPixelBuffer:(struct __CVBuffer { } *)a0 toI420PixelBuffer:(struct __CVBuffer { } *)a1;
- (void)transferPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)transferMetalTexture:(id)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (void).cxx_destruct;

@end
