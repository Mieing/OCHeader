@class IESLiveTeamFightGameModel, IESLiveAnimatedImageView, UIImageView, NSString, UIView, UILabel, IESLiveTeamFightScoreBarBonusTimeView;
@protocol IESLiveCompoundSubscription;

@interface IESLiveTeamFightScoreBar : UIView

@property (retain, nonatomic) IESLiveTeamFightGameModel *teamFightModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UIView *leftNumView;
@property (retain, nonatomic) UIView *rightNumView;
@property (retain, nonatomic) UILabel *leftScoreLabel;
@property (retain, nonatomic) UILabel *rightScoreLabel;
@property (retain, nonatomic) UILabel *relativeScoreLabel;
@property (nonatomic) BOOL isShowRelativeScore;
@property (nonatomic) double ratio;
@property (nonatomic) long long leftScore;
@property (nonatomic) long long rightScore;
@property (nonatomic) long long startTime;
@property (retain, nonatomic) IESLiveTeamFightScoreBarBonusTimeView *bonusView;
@property (nonatomic) long long bonusTimeType;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLiveAnimatedImageView *expressionAnimationView;
@property (retain, nonatomic) IESLiveAnimatedImageView *redExpressionAnimationView;
@property (retain, nonatomic) IESLiveAnimatedImageView *blueExpressionAnimationView;
@property (nonatomic) double animateOffSetX;
@property (retain, nonatomic) NSString *currentAnimationResource;
@property (retain, nonatomic) NSString *scoreBarIcon;
@property (nonatomic) BOOL usingDress;
@property (nonatomic) long long teamFightType;
@property (nonatomic) double leftNumViewHeight;
@property (nonatomic) double leftNumViewY;
@property (nonatomic) BOOL isLeftTeamRewarding;
@property (retain, nonatomic) IESLiveAnimatedImageView *waveAnimatedView;
@property (retain, nonatomic) UILabel *leftTeamRewardScoreLabel;
@property (retain, nonatomic) UILabel *rightTeamRewardScoreLabel;
@property (copy, nonatomic) id /* block */ didTapScoreBar;
@property (nonatomic) BOOL stopExpressionAnimation;

- (void)bindAction;
- (void)setScoreBarIconWithDress:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 teamFightType:(long long)a1 DIContext:(id)a2 teamFightModel:(id)a3 scoreBarIcon:(id)a4;
- (void)addTeamExpression:(long long)a0;
- (BOOL)isNeedShowScoreFuzzy;
- (BOOL)isNeedShowRelativeScore:(BOOL)a0;
- (id)relativeScoreAttributeText;
- (void)fitScoreLabelFrame;
- (void)updateBonusInfoViewWithType:(long long)a0;
- (void)setUpTeamFightBonusTimeView;
- (void)calculateRatio;
- (void)setupExpressionAnimation;
- (void)updateScoreViewWithAnimation:(BOOL)a0;
- (void)startLeftTeamProfitEggRewardAnimation;
- (void)endLeftTeamProfitEggRewardAnimation;
- (void)updateLeftTeamProfitEggRewardScore:(id)a0;
- (void)updateRightTeamProfitEggRewardScore:(id)a0;
- (void)updateLeftTeamRewardScoreLabelWithShowRelativeScore:(BOOL)a0;
- (long long)showBonusTimeWithRedTeamInfo:(id)a0 blueTeamInfo:(id)a1;
- (void)stopAnimationIfNeeded;
- (void)showWaveAnimationView;
- (void)didClickedLeftNumView;
- (void)didClickedRightNumView;
- (void)removeTeamExpressionIfNeed;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupViews;

@end
