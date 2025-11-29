@class UIImageView, CAShapeLayer, UILabel, IESLiveGradientView;
@protocol IESLiveWebPPlayer;

@interface IESLiveMultiKTVMidiModeIndicatorView : UIView

@property (retain, nonatomic) IESLiveGradientView *progressView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;

- (void)p_setupUIs;
- (void)updateScore:(double)a0;
- (void)p_StartAnimation;
- (void)updateAvatarUrlList:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateProgress:(double)a0;

@end
