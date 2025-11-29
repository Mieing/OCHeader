@class VFImageFilter, VFMetalContext;
@protocol MTLTexture;

@interface ASCSharpenFilter : NSObject

@property (retain, nonatomic) VFImageFilter *rgb2y_yyFilter;
@property (retain, nonatomic) VFImageFilter *boxfilter3x3;
@property (retain, nonatomic) VFImageFilter *yy2rgbSharpenFilter;
@property (retain, nonatomic) VFImageFilter *ySharpenFilter;
@property (retain, nonatomic) VFImageFilter *yCopyFilter;
@property (retain, nonatomic) id<MTLTexture> y_yyTexture;
@property (retain, nonatomic) id<MTLTexture> y_yyBlurTexture;
@property (retain, nonatomic) id<MTLTexture> inUVTexture;
@property (retain, nonatomic) id<MTLTexture> yCopyTexture;
@property (retain, nonatomic) VFMetalContext *context;
@property (nonatomic) float enhance;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) BOOL bProcessYuv;

- (id)createTexWithWidth:(int)a0 andHeight:(int)a1 withPixelFormat:(unsigned long long)a2 storageMode:(unsigned long long)a3;
- (id)createTexWithWidth:(int)a0 andHeight:(int)a1 withPixelFormat:(unsigned long long)a2;
- (id)create:(id)a0 bProcessYuv:(BOOL)a1;
- (void)configureArgumentTableWithCommandEncoder:(id)a0;
- (void)initWithWidth:(int)a0 height:(int)a1 enhRatio:(float)a2;
- (void)process:(id)a0 outTexture:(id)a1;
- (void)Release;
- (void).cxx_destruct;

@end
