@class IESLiveButton, IESLiveRevenueInteractInviteItem, IESLiveImageView, UIView, UILabel, IESLiveMultiLinkerExtraInfoView;
@protocol IESLiveSubscription;

@interface IESLiveRevenueInteractInviteCell : UITableViewCell

@property (retain, nonatomic) IESLiveRevenueInteractInviteItem *item;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) IESLiveImageView *headImageView;
@property (retain, nonatomic) IESLiveImageView *genderImageView;
@property (retain, nonatomic) UIView *smartContainer;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *userTagContainerView;
@property (retain, nonatomic) IESLiveImageView *userCountIconImageView;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) IESLiveImageView *rivalInfoIconView;
@property (retain, nonatomic) UILabel *rivalInfoLabel;
@property (retain, nonatomic) IESLiveButton *inviteButton;
@property (retain, nonatomic) UILabel *disabledLabel;
@property (retain, nonatomic) IESLiveMultiLinkerExtraInfoView *linkInfoView;

- (void)onInviteButtonClicked;
- (void)bindData;
- (void)layoutLegacyRoomTags;
- (void)renderUserTags;
- (void)layoutLinkInfoIfNeeded;
- (void)initSubviews;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupButton;
- (void)updateSubviews;

@end
