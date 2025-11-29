@class UIImageView, UIImage, UIView, UITapGestureRecognizer;
@protocol MMLongImageCropSliderBarViewDelegate;

@interface MMLongImageCropSliderBarView : UIControl

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIView *topEdgeView;
@property (retain, nonatomic) UIImageView *topIconFlagView;
@property (retain, nonatomic) UIView *bottomEdgeView;
@property (retain, nonatomic) UIImageView *bottomIconFlagView;
@property (nonatomic) BOOL onTopEdgeActive;
@property (nonatomic) BOOL onBottomEdgeActive;
@property (nonatomic) double topCroppedRatio;
@property (nonatomic) double bottomCroppedRatio;
@property (retain, nonatomic) UIView *sliderView;
@property (nonatomic) struct CGSize { double width; double height; } sliderFrameMaxSize;
@property (retain, nonatomic) UITapGestureRecognizer *tapGest;
@property (weak, nonatomic) id<MMLongImageCropSliderBarViewDelegate> delegate;

+ (struct CGSize { double x0; double x1; })calContentSizeWithBarSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })calBarSizeWithContentSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithImage:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })barSizeWithFixWidth:(double)a0 flexHeight:(double)a1;
- (void)initSubviews;
- (void)setSliderCurAspectRatio:(double)a0 maxAspectRatio:(double)a1;
- (void)updateCropStateWithTopRatio:(double)a0 bottomRatio:(double)a1;
- (void)resetCropStateWithImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImgaeCropFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageCropFrameToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)resetCropState;
- (void)addCornerToView:(id)a0 corners:(unsigned long long)a1 radii:(double)a2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePreviewFrameByCropRectUpdate:(unsigned int)a0;
- (void)updateFrameHeightWithCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handlePreviewFramePan:(id)a0;
- (void)onTapAction:(id)a0;
- (void)updatePreviewFrameWithTouchCenterY:(double)a0 actionType:(unsigned int)a1;
- (BOOL)checkPreviewFrameOriginYValid:(double)a0;
- (void)resetPreviewFramePos;
- (void)callbackPreviewPosChangeWithActionType:(unsigned int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageCropRect;
- (double)calTopCroppedRatio;
- (double)calBottomCroppedRatio;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
