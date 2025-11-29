@class CAShapeLayer, AWEIMIncentiveProgressPendantConfig, IESIMButton, UIImageView;

@interface AWEIMIncentiveProgressPendantView : UIView

@property (retain, nonatomic) AWEIMIncentiveProgressPendantConfig *config;
@property (retain, nonatomic) IESIMButton *containerButton;
@property (retain, nonatomic) CAShapeLayer *baseLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) UIImageView *centerImageView;
@property (nonatomic) BOOL lottieAnimationPlaying;
@property (nonatomic) double storeProgress;
@property (nonatomic) unsigned long long storeStyle;
@property (nonatomic) BOOL fullAnimationPlaying;

+ (id)p_scaleAnimationWithStart:(double)a0 end:(double)a1 beginTime:(double)a2 duration:(double)a3;
+ (id)p_rotationAnimationWithStart:(double)a0 end:(double)a1 beginTime:(double)a2 duration:(double)a3;
+ (id)p_lineWidthAnimationStart:(double)a0 end:(double)a1 beginTime:(double)a2 duration:(double)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)p_addSubviews;
- (void)updateBaseLayerColorWithHasBackgroundImage:(BOOL)a0;
- (void)seekToProgressWithoutAnim:(double)a0 style:(unsigned long long)a1;
- (void)seekToProgress:(double)a0 style:(unsigned long long)a1 hasCompleted:(BOOL)a2;
- (void)updateConfigShowProgress:(BOOL)a0;
- (void)updateCenterImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)__handleClickBtn;
- (void)p_updateWithStyle:(unsigned long long)a0;
- (void)p_playFullProgressLottieAnimation;
- (void)p_playNormalAnimationWithProgress:(double)a0;
- (void)updateProgressLayerColorWithStyle:(unsigned long long)a0;
- (void)runScaleAndRockAnim;
- (void)runLottieAnimWithCompletion:(id /* block */)a0;
- (void)runScaleAndRockAnimIfNeeded;
- (void)runLottieAnimIfNeededWithCompletion:(id /* block */)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)currentProgress;

@end
