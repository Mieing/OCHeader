@class WCFinderHeadImageView, UIImageView, UILabel, WCFinderSelectPostIdentifierItem, UIView;

@interface WCFinderSelectPostIdentifierItemView : UITableViewCell

@property (retain, nonatomic) WCFinderSelectPostIdentifierItem *item;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedView;
@property (retain, nonatomic) UIView *addIconView;
@property (retain, nonatomic) UIImageView *addIconImageView;
@property (retain, nonatomic) UILabel *checkLabel;
@property (nonatomic) BOOL showDisable;
@property (retain, nonatomic) UILabel *usernameLabel;
@property (weak, nonatomic) UIView *mentionView;
@property (weak, nonatomic) UILabel *mentionLabel;
@property (weak, nonatomic) UIView *lineView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)hideLiveView:(BOOL)a0;
- (void)prepareForReuse;
- (BOOL)reloadMentionCountWithUsername:(id)a0;
- (void)updateMentionCount:(unsigned long long)a0 showNormalRedDot:(BOOL)a1;
- (void)update:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
