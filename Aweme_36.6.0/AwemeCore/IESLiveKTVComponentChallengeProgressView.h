@class IESLiveKTVChallengeBubbleView, UIView, IESLiveGradientView, MASConstraint;

@interface IESLiveKTVComponentChallengeProgressView : UIView

@property (retain, nonatomic) UIView *progressBar;
@property (retain, nonatomic) IESLiveKTVChallengeBubbleView *bubbleView;
@property (retain, nonatomic) IESLiveGradientView *progressView;
@property (retain, nonatomic) UIView *failProgressView;
@property (retain, nonatomic) MASConstraint *progressConstraint;

- (id)initWithChallengeType:(int)a0;
- (void)bindChallengeModel:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)updateProgress:(double)a0;

@end
