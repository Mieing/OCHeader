@class AWEIMUser, UIImageView, UILabel;

@interface AWEIMExpediteMentionCell : UITableViewCell

@property (retain, nonatomic) AWEIMUser *user;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *emptyTipLabel;

+ (id)identifier;

- (void)p_setupUI;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;

@end
