@class WCFinderHeadImageView, WCFinderMsgChangeRoleViewItem, UILabel, UIImageView, UIView;

@interface WCFinderMsgChangeRoleViewCell : UITableViewCell

@property (retain, nonatomic) WCFinderMsgChangeRoleViewItem *item;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedView;
@property (retain, nonatomic) UIView *addIconView;
@property (retain, nonatomic) UIImageView *addIconImageView;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (weak, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *globalSelectedLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)hideLiveView:(BOOL)a0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)update:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
