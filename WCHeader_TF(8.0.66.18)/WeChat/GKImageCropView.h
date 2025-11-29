@class NSString, UIImageView, UIImage, UIScrollView, GKImageCropOverlayView;

@interface GKImageCropView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) GKImageCropOverlayView *cropOverlayView;
@property (nonatomic) double xOffset;
@property (nonatomic) double yOffset;
@property (nonatomic) double faktoredWidth;
@property (nonatomic) double faktoredHeight;
@property (retain, nonatomic) UIImage *imageToCrop;
@property (nonatomic) struct CGSize { double x0; double x1; } cropSize;
@property (nonatomic) BOOL resizableCropArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)croppedImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calcVisibleRectForResizeableCropArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calcVisibleRectForCropArea;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_orientationTransformedRectOfImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;

@end
