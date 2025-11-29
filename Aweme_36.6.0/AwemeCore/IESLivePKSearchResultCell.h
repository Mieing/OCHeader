@class IESLiveMultiLinkerExtraInfoView, UIImageView, RivalsSearchResponse_AnchorInfo, UIView, UILabel, UIButton;
@protocol IESLiveSubscription, IESLivePKAnchorBuilderAction;

@interface IESLivePKSearchResultCell : UITableViewCell

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) RivalsSearchResponse_AnchorInfo *anchorModel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *avatarDecorateView;
@property (retain, nonatomic) UIImageView *verifiedView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UIView *livingAnimationView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *shortIDLabel;
@property (retain, nonatomic) UILabel *fansCountLabel;
@property (retain, nonatomic) UIButton *inviteButton;
@property (retain, nonatomic) UILabel *invalidLabel;
@property (retain, nonatomic) UIView *tagContainerView;
@property (retain, nonatomic) IESLiveMultiLinkerExtraInfoView *extraInfoView;
@property (retain, nonatomic) id<IESLivePKAnchorBuilderAction> anchorBuilderAction;
@property (nonatomic) long long listNum;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ inviteBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL disableApply;
@property (nonatomic) unsigned long long searchPanelSource;

- (void)p_dispose;
- (void)p_filterLinkedUsersInRivalExtraInfo:(id)a0 avoidSelf:(id)a1;
- (void)setupSpecialButtonIfNeeded;
- (void)didClickLinkInviteButton;
- (void)updateWithAnchor:(id)a0 listNum:(long long)a1;
- (void)p_updateTagViewIfNeeded;
- (void)didClickPKInviteButton;
- (void)updateNewStyleInviteButtonWithStatus;
- (void)updateInviteButtonWithStatus:(long long)a0;
- (void)p_realStartInvite;
- (id)linkExtraParam;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutUI;

@end
