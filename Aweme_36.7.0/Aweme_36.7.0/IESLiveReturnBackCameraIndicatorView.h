@class CAGradientLayer, IESLiveReturnBackCameraStore, UIImageView, CAShapeLayer, UILabel, UIView, NSTimer;

@interface IESLiveReturnBackCameraIndicatorView : UIView

@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isFold;
@property (nonatomic) double progress;
@property (nonatomic) double interval;
@property (weak, nonatomic) IESLiveReturnBackCameraStore *store;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ startAnimation;
@property (copy, nonatomic) id /* block */ startFold;

- (void)hideWithAnimated:(BOOL)a0;
- (void)containerTapAction:(id)a0;
- (void)updateProgress:(double)a0 interval:(double)a1;
- (void)startFoldAnimation;
- (void)renderAcatarUrls:(id)a0;
- (void)startAnimation:(double)a0 delayFolding:(double)a1 completion:(id /* block */)a2;
- (void)updateBackTitle:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupViews;

@end
