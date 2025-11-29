@class UIImageView, UILabel;
@protocol IESLiveCompoundSubscription, IESLiveTeamFightBaseProvider;

@interface IESLiveTeamFightCountDownTopBar : UIView

@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (weak, nonatomic) id<IESLiveTeamFightBaseProvider> provider;
@property (nonatomic) long long teamFightType;

- (void)showResult;
- (void)bindAction;
- (id)countDownStr:(long long)a0;
- (void)openExplanationPanel;
- (id)fightStatusText;
- (id)showResultStatusText;
- (id)statusNameWith:(int)a0 teamFightInfoType:(long long)a1;
- (id)initWithType:(long long)a0 DIContext:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupViews;

@end
