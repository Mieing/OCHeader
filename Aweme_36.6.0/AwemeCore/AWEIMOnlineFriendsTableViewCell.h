@class AWEIMUser, UIStackView, UIImageView, UILabel, UIButton;
@protocol AWEIMOnlineFriendsTableViewCellDelegate;

@interface AWEIMOnlineFriendsTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) UIStackView *rightActionView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIButton *voiceCallButton;
@property (retain, nonatomic) UIButton *textGreetButton;
@property (weak, nonatomic) id<AWEIMOnlineFriendsTableViewCellDelegate> delegate;

- (void)configWithUser:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)cellTapped:(id)a0;

@end
