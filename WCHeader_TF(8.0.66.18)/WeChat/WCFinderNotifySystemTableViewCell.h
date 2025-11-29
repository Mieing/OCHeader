@class UIImageView, UILabel, RichTextView, UIView;

@interface WCFinderNotifySystemTableViewCell : UITableViewCell

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) RichTextView *contentTextView;
@property (weak, nonatomic) UIView *iconImageView;
@property (weak, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) UIView *lineView;
@property (weak, nonatomic) UILabel *redDotCountLabel;

+ (double)heightForSystemCellWithWidth:(double)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setUpUI;
- (void).cxx_destruct;

@end
