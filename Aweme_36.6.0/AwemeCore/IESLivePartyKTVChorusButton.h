@class HTSLiveImage, CAShapeLayer, UIBezierPath, UILabel, CALayer, UIImageView;
@protocol IESLiveWebPPlayer;

@interface IESLivePartyKTVChorusButton : UIButton

@property (retain, nonatomic) UILabel *chorusLabel;
@property (nonatomic) float progress;
@property (retain, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) UIBezierPath *bezierPath;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) HTSLiveImage *shiningImage;
@property (nonatomic) BOOL playingAnimation;
@property (nonatomic) BOOL previousEnable;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *shiningPlayer;

- (void)updateChorusRoleType:(unsigned long long)a0;
- (void)updateJoinChorusBtnImage:(id)a0;
- (void)updateShiningImage:(id)a0;
- (void)showShiningAnimationIfNeed;
- (void)showShiningImage;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)updateProgress:(float)a0;

@end
