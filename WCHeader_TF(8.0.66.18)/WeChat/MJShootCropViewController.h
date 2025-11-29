@class MJShootCropToolBar, MMUIImageView, NSString, UIPinchGestureRecognizer, OMJCamSpatialDesc, MMUIView, UIPanGestureRecognizer, UISelectionFeedbackGenerator, MJShootCropGuidelineMaskView;
@protocol MJShootCropViewControllerDelegate;

@interface MJShootCropViewController : MMUIViewController <MJShootCropGuidelineMaskViewDelegate, MJShootCropToolBarDelegate>

@property (nonatomic) BOOL isStandardCanvas;
@property (nonatomic) double scaleFactor;
@property (nonatomic) double scaleFactorRotationImplicit;
@property (nonatomic) unsigned long long prevsSnapType;
@property (retain, nonatomic) OMJCamSpatialDesc *spatialDesc;
@property (retain, nonatomic) OMJCamSpatialDesc *spatialDescOriginal;
@property (retain, nonatomic) MMUIImageView *imageView;
@property (retain, nonatomic) MJShootCropGuidelineMaskView *cropGuidelineMaskView;
@property (retain, nonatomic) MMUIView *displayContainerView;
@property (retain, nonatomic) MJShootCropToolBar *toolBar;
@property (retain, nonatomic) MMUIView *bottomBar;
@property (retain, nonatomic) UIPanGestureRecognizer *panGR;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGR;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<MJShootCropViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)rotationRadiansWithRotationMode:(unsigned long long)a0;
+ (struct CGPoint { double x0; double x1; })scaleFactorWithFlipMode:(unsigned long long)a0;
+ (id)createButtonWithIconName:(id)a0;

- (id)initWithImage:(id)a0 spatialDesc:(id)a1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupViews;
- (void)layoutImageView:(id)a0 inContainerView:(id)a1 scaleMode:(unsigned long long)a2;
- (void)guidelineMaskView:(id)a0 didUpdateGuidelineFrameBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handlePan:(id)a0;
- (void)handlePinch:(id)a0;
- (void)handleTranslationForView:(id)a0 boundingView:(id)a1 panGR:(id)a2;
- (void)handleScaleForView:(id)a0 boundingView:(id)a1 pinchGR:(id)a2;
- (BOOL)checkBorderAndSnapIfNeededForView:(id)a0 boundingView:(id)a1 translation:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)checkAlignmentAndSnapIfNeededForView:(id)a0 boundingView:(id)a1 translation:(struct CGPoint { double x0; double x1; } *)a2;
- (void)updateImageViewWithSpatialDesc;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })createTranformWithSpatialDesc:(id)a0;
- (void)updateSpatialDescWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateSpatialDescWithScale:(double)a0;
- (void)cropToolBarDidTapOnRotate:(id)a0;
- (void)updateSpatialDescWithRotationAction;
- (void)updateScaleFactorRotationImplicit;
- (void)cropToolBarDidTapOnFlip:(id)a0;
- (void)updateSpatialDescWithFlipAction;
- (void)cropToolBarDidTapOnReset:(id)a0;
- (void)updateParametersWithResetAction;
- (void)updateSpatialDescWithResetAction;
- (void)updateResetButtonEnabledState;
- (void)cancelButtonDidTouchUpInside:(id)a0;
- (void)confirmButtonDidTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
