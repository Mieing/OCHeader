@class UIImageView, UILabel, UIView;

@interface AFDInviteMoreFriendsTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *dotsimageView;
@property (retain, nonatomic) UIView *moreFriendscontentView;
@property (retain, nonatomic) UILabel *moreFriendslabel;
@property (retain, nonatomic) UILabel *noMoreFriendslabel;

+ (id)identifier;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
