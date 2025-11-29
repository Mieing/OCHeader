@class AFDPlayTogetherFriend, AFDInviteFriendTogetherViewModel, UIImageView, UILabel, UIView, UIButton;

@interface AFDInviteFriendTogetherTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *inviteBtn;
@property (retain, nonatomic) UIView *onlineOuterView;
@property (retain, nonatomic) AFDPlayTogetherFriend *friend;
@property (copy, nonatomic) id /* block */ clickInviteButtonBlock;
@property (retain, nonatomic) AFDInviteFriendTogetherViewModel *viewModel;

+ (id)identifier;

- (void)p_refreshUI;
- (void)p_disableInviteButton;
- (void)p_enableInviteButton;
- (void)p_inviteUser;
- (void)configWithFriend:(id)a0 viewModel:(id)a1 clickInviteButtonBlock:(id /* block */)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
