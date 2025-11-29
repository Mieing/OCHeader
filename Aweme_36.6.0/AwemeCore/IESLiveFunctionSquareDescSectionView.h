@class UILabel, YYLabel;

@interface IESLiveFunctionSquareDescSectionView : IESLiveFunctionSquareBaseTableViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (copy, nonatomic) id /* block */ linkBlock;

+ (double)heightWithTitle:(id)a0;

- (void)initializeOnCellLoaded;
- (void).cxx_destruct;
- (void)updateWithTitle:(id)a0;

@end
