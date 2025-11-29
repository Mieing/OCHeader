@class IESLiveIMShareModel, NSString, UIImageView, IESLiveChatChannelAvatar, UILabel, UIView, UIButton;

@interface IESLiveInviteFriendTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *onlineGreenDot;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *selectedStateImageView;
@property (retain, nonatomic) IESLiveChatChannelAvatar *onlineAvatarImageView;
@property (retain, nonatomic) UIButton *followBtn;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) UIView *relationContainer;
@property (retain, nonatomic) UILabel *relationLabel;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *accessAbilityString;
@property (copy, nonatomic) id /* block */ didClickFollow;
@property (retain, nonatomic) IESLiveIMShareModel *friendsModel;

+ (id)identifier;

- (void)changeSelectState:(BOOL)a0;
- (void)configWithFriends:(id)a0;
- (void)changeFollowState:(BOOL)a0;
- (void)updateWithStyle:(unsigned long long)a0 reason:(id)a1 relation:(id)a2;
- (void)animationWithSelectedStateImageView;
- (void)hideFollowBtn;
- (void)didFollow:(id)a0;
- (void)p_setupUI;
- (id)accessibilityLabel;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;

@end
