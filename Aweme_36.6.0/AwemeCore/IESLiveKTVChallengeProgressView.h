@class HTSLiveScorllLabelView, UIImageView, IESLiveGCDTimer, UILabel, IESLiveGradientView, UIView;

@interface IESLiveKTVChallengeProgressView : UIView

@property (nonatomic) int challengeType;
@property (nonatomic) unsigned long long target;
@property (retain, nonatomic) IESLiveGradientView *progressView;
@property (retain, nonatomic) UIView *challengeTypeView;
@property (retain, nonatomic) UILabel *targetLabel;
@property (retain, nonatomic) UILabel *dividerLabel;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) HTSLiveScorllLabelView *songName;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) IESLiveGCDTimer *timer;

- (void)invalidataTimer;
- (void)updateRemainTime:(unsigned long long)a0;
- (id)initWithChallengeType:(int)a0;
- (void)bindChallengeModel:(id)a0;
- (void)showStartAnimationWithSingerName:(id)a0 andSongName:(id)a1;
- (void)showChallengeStatusWithStatus:(unsigned long long)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)setChallengeTarget:(unsigned long long)a0;
- (void)setChallengeScore:(unsigned long long)a0;
- (void)startSongNameAnimationWithName:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupSubviews;

@end
