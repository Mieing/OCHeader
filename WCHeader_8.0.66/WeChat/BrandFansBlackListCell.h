@class UIImageView, UILabel, InteractiveUserInfo;

@interface BrandFansBlackListCell : MMBaseMultiMenuTableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) InteractiveUserInfo *userInfo;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateWithUserInfo:(id)a0;
- (void).cxx_destruct;

@end
