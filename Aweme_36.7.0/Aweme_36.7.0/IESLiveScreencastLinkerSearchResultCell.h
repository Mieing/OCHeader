@class IESLiveScreencastLinkerSearchViewModel, UIImageView, RivalsSearchResponse_AnchorInfo, UILabel, IESLiveScreencastLinkerSearchExtraInfoView, UIButton;
@protocol IESLiveSubscription;

@interface IESLiveScreencastLinkerSearchResultCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *avatarDecorateView;
@property (retain, nonatomic) UIImageView *verifiedView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *shortIDLabel;
@property (retain, nonatomic) UILabel *fansCountLabel;
@property (retain, nonatomic) UIButton *inviteButton;
@property (retain, nonatomic) UILabel *invalidLabel;
@property (retain, nonatomic) RivalsSearchResponse_AnchorInfo *anchorModel;
@property (retain, nonatomic) IESLiveScreencastLinkerSearchViewModel *viewModel;
@property (retain, nonatomic) IESLiveScreencastLinkerSearchExtraInfoView *extraInfoView;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;

- (void)updateWithAnchor:(id)a0 viewModel:(id)a1;
- (void)handleLiving:(id)a0;
- (void)linkStatusDidChanged;
- (void)p_filterLinkedUsersInRivalExtraInfo:(id)a0 avoidSelf:(id)a1;
- (void)setupSpecialButtonIfNeeded;
- (void)didClickLinkInviteButton;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutUI;

@end
