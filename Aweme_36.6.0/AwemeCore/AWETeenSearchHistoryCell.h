@class NSString, UILabel, NSIndexPath, UIButton;

@interface AWETeenSearchHistoryCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *deleteButton;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (retain, nonatomic) NSIndexPath *indexPath;

+ (id)cellIdentifier;
+ (double)cellHeight;

- (void)deleteButtonOnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
