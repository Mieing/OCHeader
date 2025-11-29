@class CAGradientLayer, IESGCPSpeakerView, UILabel, UIView, UIButton;

@interface AWEGCPPlayerInteractionView : UIView

@property (retain, nonatomic) UILabel *leftTimeLabel;
@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) CAGradientLayer *bottomMaskLayer;
@property (retain, nonatomic) IESGCPSpeakerView *speakerView;
@property (copy, nonatomic) id /* block */ speakerButtonDidClicked;
@property (readonly, nonatomic) double interactionViewHeight;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIView *progressView;

- (void)setIsMute:(BOOL)a0;
- (void)setupWithIsLive:(BOOL)a0;
- (id)initWithIsLive:(BOOL)a0;
- (void)updateLeftTitle:(id)a0;
- (void)updateLeftTime:(double)a0 totalTime:(double)a1;
- (void)setProgressHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateProgress:(double)a0;

@end
