@class UIImageView, UILabel, UIView;

@interface AWEIMOnlinePrivacyFriendsListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIView *bottomCuttingLine;

+ (Class)aAWEBrandColorAdapterClass;
+ (id)identifier;
+ (double)cellHeight;

- (id)aAWEBrandColorAdapter;
- (void)updateSelected:(BOOL)a0;
- (void)configUser:(id)a0 isSearching:(BOOL)a1 isSelected:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
