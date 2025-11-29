@class BDImageCropConfig, BDSRPreprocessingInfo;

@interface BDImageDecoderConfig : NSObject <NSCopying>

@property (retain, nonatomic) BDSRPreprocessingInfo *srPreprocessingInfo;
@property (nonatomic) BOOL decodeForDisplay;
@property (nonatomic) BOOL shouldScaleDown;
@property (nonatomic) double scale;
@property (nonatomic) BOOL withoutDiskScale;
@property (nonatomic) struct CGSize { double width; double height; } sizeLimit;
@property (nonatomic) unsigned long long memoryLimit;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) BOOL smartCrop;
@property (retain, nonatomic) BDImageCropConfig *customCropConfig;
@property (nonatomic) unsigned long long decoderOptions;
@property (nonatomic) struct CGSize { double x0; double x1; } downsampleSize;

+ (struct CGSize { double x0; double x1; })minimumSizeFromOriginSize:(struct CGSize { double x0; double x1; })a0;

- (struct CGSize { double x0; double x1; })imageCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)imageSizeType:(struct CGSize { double x0; double x1; })a0;
- (void)setDownsampleSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })downsampleSize;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
