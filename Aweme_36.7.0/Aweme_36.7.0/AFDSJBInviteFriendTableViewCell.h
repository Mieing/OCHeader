@class UIImageView, UILabel, UIView;
@protocol AWEIMShareModelProtocol;

@interface AFDSJBInviteFriendTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *selectedStateImageView;
@property (retain, nonatomic) UIView *onlineOuterView;
@property (retain, nonatomic) id<AWEIMShareModelProtocol> friend;

+ (id)identifier;

- (void)changeSelectState:(BOOL)a0;
- (id)accessibilityContentForSelected:(BOOL)a0;
- (void)configWithFriend:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;

@end
