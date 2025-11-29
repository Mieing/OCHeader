@class UIImageView, UILabel, NSIndexPath, UIButton;

@interface IESLiveSearchPlaceholderHistoryTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *clockImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ deleteBlock;

+ (id)reuseIdentify;
+ (double)cellHeight;

- (void)configureUI;
- (void)configureWithHistoryWord:(id)a0;
- (BOOL)isNewFeedDrawStyle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deleteButtonTapped;

@end
