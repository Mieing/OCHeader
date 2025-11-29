@class UIImageView, UILabel, NSIndexPath, UIButton;

@interface AWEAnchorGameSearchHistoryCell : UITableViewCell

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *clockImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ deleteBlock;

+ (id)cellIdentifier;
+ (double)cellHeight;

- (void)configureUI;
- (void)configureWithHistoryWord:(id)a0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)deleteButtonTapped;

@end
