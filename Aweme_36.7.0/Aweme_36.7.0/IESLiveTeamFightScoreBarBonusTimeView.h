@class UIImageView, IESLiveCountTimer, UILabel, UIView;

@interface IESLiveTeamFightScoreBarBonusTimeView : UIView

@property (retain, nonatomic) UIImageView *bonusBgView;
@property (nonatomic) long long bonusTimeType;
@property (retain, nonatomic) UILabel *bonusTimeLabel;
@property (retain, nonatomic) UILabel *bonusCoefficientLabel;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (retain, nonatomic) IESLiveCountTimer *countTimer;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) double coefficient;
@property (copy, nonatomic) id /* block */ countDownTimerCompletion;

- (id)initWithBonusTimeType:(long long)a0 duration:(unsigned long long)a1 coefficient:(double)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
