@class IESLiveWebpLoadingView, UIButton, IESLiveMultiKTVChallengeSelectionView, UILabel, UIView, IESLiveMultiKTVChallengeLaunchViewModel;

@interface IESLiveMultiKTVChallengeLaunchPanel : UIView

@property (retain, nonatomic) IESLiveMultiKTVChallengeLaunchViewModel *viewModel;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *ruleBtn;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveMultiKTVChallengeSelectionView *typeSelectionView;
@property (retain, nonatomic) IESLiveMultiKTVChallengeSelectionView *targetSelectionView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *openBtn;

- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)updateTipsLabelWithChallengeType:(int)a0;
- (void)hideCustomTargetPanel;
- (void)openChallenge;
- (void)didClickedRuleBtn;
- (void)showCustomTargetPanel;
- (void)didClickedOpenBtn;
- (void).cxx_destruct;
- (void)setupObservers;
- (void)setupSubviews;
- (void)setupContentView;

@end
