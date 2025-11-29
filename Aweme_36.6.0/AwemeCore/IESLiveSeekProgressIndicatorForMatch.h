@class UIColor, UIGestureRecognizer, UIImageView, NSString, IESLiveAnimatedImageView, UIView, HTSLiveAmazingBackgroundView;

@interface IESLiveSeekProgressIndicatorForMatch : UIView <IESLiveSeekAction>

@property (retain, nonatomic) UIView *progressBar;
@property (retain, nonatomic) UIView *panView;
@property (retain, nonatomic) IESLiveAnimatedImageView *animatedPanView;
@property (retain, nonatomic) UIImageView *imagePanView;
@property (retain, nonatomic) UIView *panBg;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *progressView;
@property (retain, nonatomic) UIView *nodeContainer;
@property (retain, nonatomic) UIColor *progressIndicatorStartColor;
@property (retain, nonatomic) UIColor *progressIndicatorEndColor;
@property (nonatomic) double r1;
@property (nonatomic) double g1;
@property (nonatomic) double b1;
@property (nonatomic) double r2;
@property (nonatomic) double g2;
@property (nonatomic) double b2;
@property (nonatomic) BOOL useSingleColor;
@property (retain, nonatomic) UIColor *singleColor;
@property (retain, nonatomic) UIGestureRecognizer *ges;
@property (nonatomic) double panViewDotWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateOrientation:(BOOL)a0;
- (void)playAnimationZoomSelf:(BOOL)a0 zoomBg:(BOOL)a1;
- (void)updateIndiactorWithSingleColor:(id)a0;
- (void)updateIndiactorWithColor:(id)a0 staticImage:(id)a1 dynamicImage:(id)a2;
- (void)addGes:(id)a0;
- (id)getColorAtProgress:(double)a0;
- (void)initRGBParams;
- (void)startAnimtion;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)dealloc;
- (void)updateWithProgress:(double)a0;
- (void)setIndicatorHidden:(BOOL)a0;

@end
