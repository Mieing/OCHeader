@class UIImageView, AWEUserModel, UILabel;

@interface AWEVoteStickerDetailUserTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;

+ (id)identifier;

- (void)configWithUser:(id)a0 darkMode:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
