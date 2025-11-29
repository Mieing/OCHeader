@class EAGLContext, CIContext;

@interface WCStoryPhotoFilterObj : NSObject

@property (retain, nonatomic) CIContext *context;
@property (retain, nonatomic) EAGLContext *eaglContext;

- (id)init;
- (void)dealloc;
- (id)createBlurImageBackgroundWithOriginalImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 blurRadius:(double)a2;
- (id)createPureBlurImageBackgroundWithOriginalImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (id)creatBlurBackgound:(id)a0 blurRadius:(double)a1;
- (id)creatBlurBackgound:(id)a0 blurRadius:(double)a1 offset:(double)a2;
- (id)scalingImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (id)compositeBlurImage:(id)a0 originalImage:(id)a1;
- (id)imageByCroppingWithImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageByCroppingWithImage:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })getImageSizeToScaleAspectFillSize:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })getImageSizeToScaleAspectFitSize:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBlurRegionWithBlurSize:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1 originalImageSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;

@end
