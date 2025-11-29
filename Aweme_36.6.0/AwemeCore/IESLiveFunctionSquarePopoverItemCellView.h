@class UILabel, UIImageView, IESLiveFunctionSquarePopoverItem;

@interface IESLiveFunctionSquarePopoverItemCellView : IESLiveFunctionSquareBaseTableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) IESLiveFunctionSquarePopoverItem *popItem;

- (void)initializeOnCellLoaded;
- (void).cxx_destruct;
- (void)update:(id)a0;

@end
