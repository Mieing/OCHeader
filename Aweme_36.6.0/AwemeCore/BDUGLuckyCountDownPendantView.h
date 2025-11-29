@class UILabel, UIView, NSString, _BDUGLuckyPendantBubbleView, UIImageView, CAGradientLayer, UIProgressView, BDUGLuckyCountDownPendantModel;

@interface BDUGLuckyCountDownPendantView : UIView <BDUGLuckyCountDownPendantViewInternalProtocol>

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *closeView;
@property (retain, nonatomic) _BDUGLuckyPendantBubbleView *bubbleView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) BOOL bubbleViewHasShown;
@property (retain, nonatomic) BDUGLuckyCountDownPendantModel *model;
@property (nonatomic) unsigned long long arrowDirection;
@property (copy, nonatomic) id /* block */ didTapPendantView;
@property (copy, nonatomic) id /* block */ didTapPendantCloseView;
@property (nonatomic) long long countTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupNotification;
- (void)__didTapPendantView:(id)a0;
- (id)__imageWithImageName:(id)a0;
- (void)__didTapPendantCloseView;
- (void)__updateGradientLayer:(id)a0 hexColorArray:(id)a1;
- (id)__textForStatus:(unsigned long long)a0 leftTime:(long long)a1;
- (BOOL)__checkCanUpdateProgressUI;
- (BOOL)__shouldHideBubbleView;
- (void)__didBecomeActive;
- (id)__buildTimeStrWithLeftTime:(long long)a0;
- (void)updateWithCountTime:(long long)a0;
- (void)updateFrameWithPosition:(id)a0 superviewWidth:(double)a1 superviewHeight:(double)a2;
- (void)registerTapHandler:(id /* block */)a0;
- (void)registerCloseIconTapHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)show;
- (void)updateWithModel:(id)a0;
- (void)updateWithStatus:(unsigned long long)a0;

@end
