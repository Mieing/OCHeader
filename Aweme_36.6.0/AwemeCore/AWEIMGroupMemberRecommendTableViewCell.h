@class AWEIMRecommendUserModel, UIImageView, UILabel, UIView, UIButton;

@interface AWEIMGroupMemberRecommendTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) UIButton *inviteButton;
@property (retain, nonatomic) UIButton *removeButton;
@property (copy, nonatomic) id /* block */ inviteBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (retain, nonatomic) AWEIMRecommendUserModel *model;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)__setupUI;
- (void)transferToUserProfile;
- (void)__setupUserUI;
- (void)__setupButton:(id)a0 withTitle:(id)a1 style:(long long)a2 enable:(BOOL)a3;
- (void)invite;
- (void).cxx_destruct;
- (void)remove;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
