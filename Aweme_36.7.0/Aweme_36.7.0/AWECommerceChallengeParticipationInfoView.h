@class AWETaskModel, UIImageView, NSTimer, UILabel, UIView;

@interface AWECommerceChallengeParticipationInfoView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *seperateLine;
@property (retain, nonatomic) UIView *userImageContentView;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWETaskModel *mission;

- (void)updateWithMission:(id)a0;
- (void)invalidateCountdownTimer;
- (void)updateTextColorWithChallenge:(id)a0;
- (void)refreshCountLabel:(id)a0;
- (void)startCountdownTimerIfNeeded;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)dealloc;

@end
