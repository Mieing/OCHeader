@class UIImageView, UILabel, NSIndexPath, UIButton;

@interface IESLiveFunctionSquareSearchHistoryCell : IESLiveFunctionSquareBaseTableViewCell

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *clockImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (copy, nonatomic) id /* block */ deleteBlock;

+ (double)heightOfDefault;

- (void)configureWithHistoryWord:(id)a0;
- (void)initializeOnCellLoaded;
- (void)updateToBeforeLiveStatus;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)deleteButtonTapped;

@end
