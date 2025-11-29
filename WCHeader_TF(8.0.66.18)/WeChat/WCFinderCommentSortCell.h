@class UILabel, UIImageView;

@interface WCFinderCommentSortCell : UITableViewCell

@property (retain, nonatomic) UILabel *sortLabel;
@property (retain, nonatomic) UIImageView *selectedView;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)updateTitle:(id)a0 isSelected:(BOOL)a1;
- (void).cxx_destruct;

@end
