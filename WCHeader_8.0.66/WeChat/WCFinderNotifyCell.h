@class UIImageView, UILabel, RichTextView, UIView;

@interface WCFinderNotifyCell : UITableViewCell

@property (retain, nonatomic) RichTextView *contentTextView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *detailImageView;
@property (weak, nonatomic) UIView *lineView;
@property (weak, nonatomic) UIView *bottomLineView;

+ (double)cellHeightWithViewModel:(id)a0 width:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;
- (void)updateDataWith:(id)a0 cellWidth:(double)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
