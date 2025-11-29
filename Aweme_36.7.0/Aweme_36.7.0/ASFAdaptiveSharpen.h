@class ASFBoxFilter, ASFCalcGammaFilter, ASFMetalContext, ASFCopyUVFilter, ASFYUV2RGBFilter, ASFRGB2YUVFilter, ASFCalcDiffFilter, NSMutableArray, ASFAddDiffFilter;
@protocol MTLTexture;

@interface ASFAdaptiveSharpen : NSObject

@property (retain, nonatomic) ASFMetalContext *context;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (retain, nonatomic) ASFRGB2YUVFilter *rgb2yuvFilter;
@property (retain, nonatomic) ASFBoxFilter *boxFilter;
@property (retain, nonatomic) ASFCalcDiffFilter *calcDiffFilter;
@property (retain, nonatomic) ASFAddDiffFilter *addDiffFilter;
@property (retain, nonatomic) ASFYUV2RGBFilter *yuv2rgbFilter;
@property (retain, nonatomic) ASFCalcGammaFilter *calcGammaFilter;
@property (retain, nonatomic) ASFCopyUVFilter *UVFilter;
@property (retain, nonatomic) id<MTLTexture> inYTexture;
@property (retain, nonatomic) id<MTLTexture> inUVTexture;
@property (retain, nonatomic) id<MTLTexture> varGTexture;
@property (retain, nonatomic) id<MTLTexture> gammaTexture;
@property (retain, nonatomic) id<MTLTexture> diffTexture;
@property (retain, nonatomic) id<MTLTexture> outYTexture;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (retain, nonatomic) id<MTLTexture> outputUVTexture;
@property (retain, nonatomic) id<MTLTexture> outputUVTexture_copy;
@property (retain, nonatomic) id<MTLTexture> minMaxTexture;
@property (nonatomic) struct ASFSharpenParam { void *context; int inType; int outType; float edge_weight_esp; int calc_diff_size; int enable_edge_tune; float edge_gamma; int enable_diff_smooth; int diff_smooth_size; float amount; float ratio; int minmax_filter_size; int perf_level; } asfParam;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;
@property (nonatomic) struct __CVBuffer { } *outputPixelBuffer;
@property (nonatomic) int allocWidth;
@property (nonatomic) int allocHeight;
@property (retain, nonatomic) NSMutableArray *texturPool;
@property (retain, nonatomic) NSMutableArray *textureList;

+ (id)init:(id)a0 width:(int)a1 height:(int)a2 param:(struct ASFSharpenParam { void *x0; int x1; int x2; float x3; int x4; int x5; float x6; int x7; int x8; float x9; float x10; int x11; int x12; } *)a3;

- (id)create:(id)a0 width:(int)a1 height:(int)a2 param:(struct ASFSharpenParam { void *x0; int x1; int x2; float x3; int x4; int x5; float x6; int x7; int x8; float x9; float x10; int x11; int x12; } *)a3;
- (void)alloc_mem;
- (void)release_mem;
- (void)initMap:(id)a0 outTexture:(id)a1;
- (int)processTexture:(id)a0;
- (id)alloc_texture:(unsigned long long)a0 width:(int)a1 height:(int)a2;
- (int)getoutput:(void **)a0 output1:(void **)a1;
- (int)reconfig:(int)a0 height:(int)a1 param:(struct ASFSharpenParam { void *x0; int x1; int x2; float x3; int x4; int x5; float x6; int x7; int x8; float x9; float x10; int x11; int x12; } *)a2;
- (void)uninit;
- (int)process:(void *)a0;
- (void).cxx_destruct;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0;

@end
