@class UIView, AVCaptureVideoPreviewLayer, CADisplayLink, NSTimer, NSString, CAShapeLayer, CAGradientLayer, AFEStatusBar, UILabel;
@protocol DTFFaceViewDelegate;

@interface DTFNearFarFaceView : UIView <IStatusBarDelegate, DTFFaceViewProtocol>

@property (retain, nonatomic) AFEStatusBar *statusBar;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *gradientMaskLayer;
@property (nonatomic) int gradientAngle;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) UIView *faceContainerView;
@property (retain, nonatomic) CAShapeLayer *faceMaskLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskLayerPathFrame;
@property (nonatomic) double targetFaceRegion;
@property (nonatomic) struct CGSize { double width; double height; } cameraPreviewSize;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSTimer *tipsTimer;
@property (copy, nonatomic) NSString *tips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DTFFaceViewDelegate> delegate;

- (void)setSuitableType:(BOOL)a0;
- (void)setPhotinusColor:(id)a0;
- (void)showBlurImage:(id)a0;
- (void)faceDectectComplete;
- (void)onButtonCancel;
- (void)onTipsTimer;
- (void)setScreenRotation:(BOOL)a0;
- (void)setPlayBtnIcon;
- (void)handleFaceStateChange:(long long)a0 stateTips:(id)a1 actionGuide:(id)a2 actionGuideType:(long long)a3 progress:(double)a4 extInfo:(id)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cameraPreviewSize:(struct CGSize { double x0; double x1; })a1;
- (void)setFaceMaskSize:(struct CGSize { double x0; double x1; })a0;
- (double)faceMaskWidthWithRatio:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceMaskFrameWithWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)view;
- (void)reset;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateAnimation;

@end
