@interface BDImageCropConfig : NSObject <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultCropRect;
@property (nonatomic) BOOL usingDefaultCropRect;
@property (nonatomic) BOOL usingViewBasedCropRect;
@property (nonatomic) double maxCropAreaRatio;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } customCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;

+ (struct CGSize { double x0; double x1; })cropImageOriginalSizeForData:(id)a0 decoderOptions:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centralCropRectForViewSize:(struct CGSize { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centralCropRectBaseOnViewSize:(struct CGSize { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1 maxCropAreaRatio:(double)a2;

- (void)generatingDefaultCropRectIfNeededForImageData:(id)a0 decoderOptions:(unsigned long long)a1;
- (BOOL)usingInternalCropRect;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
