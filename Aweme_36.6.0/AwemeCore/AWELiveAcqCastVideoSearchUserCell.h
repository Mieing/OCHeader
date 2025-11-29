@class UIImageView, AWESearchUser, UILabel, UIButton;

@interface AWELiveAcqCastVideoSearchUserCell : UITableViewCell

@property (retain, nonatomic) AWESearchUser *model;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verificationIcon;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *fansLabel;
@property (retain, nonatomic) UILabel *nameLabel;

- (void)didClickFollowButton;
- (void)updateFollowButton:(long long)a0 followerStatus:(long long)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
