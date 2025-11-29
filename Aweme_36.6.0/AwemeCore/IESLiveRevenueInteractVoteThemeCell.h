@class UILabel, VoteSetting, IESLiveImageView;
@protocol IESLiveSubscription;

@interface IESLiveRevenueInteractVoteThemeCell : UITableViewCell

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) VoteSetting *voteTheme;
@property (retain, nonatomic) UILabel *themeLabel;
@property (retain, nonatomic) IESLiveImageView *selectedView;

- (void)showSelectedView;
- (void)updateVoteTheme:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;

@end
