@class NSString, IESLivePKInviteeListTipsView, UIImageView, IESLivePKInviteeListItem, UILabel, UIView, UIButton;
@protocol IESLiveSubscription, IESLivePKAnchorBuilderAction, IESLivePKInviteeListCellDelegate;

@interface IESLivePKInviteeListCell : UITableViewCell <IESHYControllerDelegate>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) UIImageView *gradeImageView;
@property (retain, nonatomic) UIImageView *gradeTextView;
@property (retain, nonatomic) UIImageView *streamTypeView;
@property (retain, nonatomic) UIImageView *genderImageView;
@property (retain, nonatomic) UIImageView *userCountIconImageView;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) UILabel *followedCountLabel;
@property (retain, nonatomic) UIImageView *rivalInfoIconView;
@property (retain, nonatomic) UILabel *rivalInfoLabel;
@property (retain, nonatomic) UIView *userTagContainerView;
@property (retain, nonatomic) UIView *roomTagContainerView;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UILabel *halfFriendTagLabel;
@property (retain, nonatomic) UIView *seasonRankView;
@property (retain, nonatomic) UIButton *inviteButton;
@property (retain, nonatomic) UIView *smartContainer;
@property (retain, nonatomic) IESLivePKInviteeListTipsView *tipsView;
@property (retain, nonatomic) UILabel *bookPKInfoLabel;
@property (retain, nonatomic) UIView *bookBattleView;
@property (retain, nonatomic) IESLivePKInviteeListItem *item;
@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) id<IESLivePKAnchorBuilderAction> anchorBuilderAction;
@property (retain, nonatomic) UIImageView *animationView;
@property (nonatomic) BOOL isAnimation;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ cancelInviteBlock;
@property (copy, nonatomic) id /* block */ openBookBattleAction;
@property (weak, nonatomic) id<IESLivePKInviteeListCellDelegate> deleagte;
@property (nonatomic) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesHYControllerDidDismiss:(id)a0;
- (void)addSubviews;
- (void)didSelectCell;
- (void)onInviteButtonClicked;
- (void)receiveAppWillBecomeForegroundNotification;
- (void)addAnimationViewAndTitle;
- (void)trackWithTags:(id)a0;
- (void)updateWithItem:(id)a0 type:(unsigned long long)a1;
- (BOOL)userDarkStyle;
- (void)renderUserTagsWithAvatarHeight:(double)a0;
- (void)layoutLegacyRoomTags;
- (id)getCurrentUserShowTipsKey:(id)a0;
- (BOOL)needShowFollowedCount;
- (void)onBookBattleViewClicked;
- (void)trackFirstTriggerWithItemType:(unsigned long long)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)createAnimation;

@end
