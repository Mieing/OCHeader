@class UIImageView, WCFinderHeadImageView, UILabel, UIView;

@interface WCFinderAccountSelectedInWXTableViewCell : UITableViewCell

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *fansLabel;
@property (retain, nonatomic) UIImageView *selectedView;
@property (retain, nonatomic) UIView *addIconView;
@property (retain, nonatomic) UIImageView *addIconImageView;
@property (retain, nonatomic) UIView *selectBGView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;
- (void)prepareForReuse;
- (void)updateWithContact:(id)a0 fansCount:(unsigned long long)a1 isSelected:(BOOL)a2;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
