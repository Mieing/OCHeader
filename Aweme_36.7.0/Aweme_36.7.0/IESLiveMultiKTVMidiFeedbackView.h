@class IESLiveMultiKTVMIDIFeedbackResult, CAGradientLayer, UIImageView, IESLiveKTVGradientLabel, UILabel, IESLiveGradientView, UIButton;

@interface IESLiveMultiKTVMidiFeedbackView : UIView

@property (retain, nonatomic) IESLiveMultiKTVMIDIFeedbackResult *result;
@property (retain, nonatomic) IESLiveGradientView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *borderGradientLayer;
@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *songLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *scoreLabel;
@property (retain, nonatomic) UILabel *bottomTipLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (copy, nonatomic) id /* block */ followAction;

- (void)updateFollowStatus:(BOOL)a0;
- (void)didTapFollowBtn;
- (id)initWithFeedbackResult:(id)a0;
- (void)p_removeGradientLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;

@end
