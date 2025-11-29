@class NSString, UIImageView, AFDColorRingGradientView, UIView, CAShapeLayer, AWEPublishBaseTask;

@interface AWEStoryPublishProgressView : UIView <AWETaskProgressViewProtocol>

@property (retain, nonatomic) UIView *shadowContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *backgroundAvatarView;
@property (retain, nonatomic) UIView *blurOverlayView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AFDColorRingGradientView *story25RingView;
@property (retain, nonatomic) UIView *ringContainerView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) double blackRingRadius;
@property (nonatomic) double progressRingRadius;
@property (nonatomic) double ringWidth;
@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (nonatomic) double currentProgress;
@property (nonatomic) double lastEffectiveProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginPublish;
- (void)configPublishTask:(id)a0;
- (void)updateSubviewHidden:(BOOL)a0;
- (void)loadCurrentUserAvatar;
- (void)renderProgressArc:(double)a0 animated:(BOOL)a1;
- (void)setupBlurBackground;
- (void)setupRingLayers;
- (void)applyBlurToAvatarImage:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)updateProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
