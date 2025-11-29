@class UIImageView, UILabel, AWEIMUser;

@interface AFDSJBInviteSearchFriendTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *selectedStateImageView;
@property (retain, nonatomic) AWEIMUser *friend;

+ (id)identifier;

- (void)configNameLabelWithShareModel:(id)a0;
- (id)attrForText:(id)a0 highlightRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 attr:(id)a2;
- (void)changeSelectState:(BOOL)a0;
- (id)accessibilityContentForSelected:(BOOL)a0;
- (void)configWithFriend:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;

@end
