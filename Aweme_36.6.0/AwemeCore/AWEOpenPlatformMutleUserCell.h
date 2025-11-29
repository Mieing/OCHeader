@class UIImageView, UILabel, UIView;

@interface AWEOpenPlatformMutleUserCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *mobileLabel;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) UIView *separatorLine;

- (void)updateCheckStatus:(BOOL)a0;
- (void)updateWithUserInfoItem:(id)a0;
- (void)updateToAddUserStyle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
