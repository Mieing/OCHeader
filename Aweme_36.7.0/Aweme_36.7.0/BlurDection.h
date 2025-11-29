@class MPSImageStatisticsMeanAndVariance, MPSImageLaplacian, VFMetalContext;
@protocol MTLTexture;

@interface BlurDection : NSObject

@property (retain, nonatomic) VFMetalContext *context;
@property (retain, nonatomic) MPSImageLaplacian *laplacianFilter;
@property (retain, nonatomic) MPSImageStatisticsMeanAndVariance *calcMeanVarFilter;
@property (retain, nonatomic) id<MTLTexture> laplacianTexture;
@property (retain, nonatomic) id<MTLTexture> meanVarTexture;

- (id)createTexWithWidth:(int)a0 andHeight:(int)a1 withPixelFormat:(unsigned long long)a2 storageMode:(unsigned long long)a3;
- (id)createTexWithWidth:(int)a0 andHeight:(int)a1 withPixelFormat:(unsigned long long)a2;
- (float)process:(id)a0 outTexture:(id)a1;
- (void)initVideoFeatureWithWidth:(int)a0 height:(int)a1;
- (float)process:(id)a0;
- (void).cxx_destruct;
- (id)create:(id)a0;

@end
