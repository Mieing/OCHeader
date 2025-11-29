@class IESECWinSortCell, IESECWinFilterCell, IESECWinCategoryContainerCell;

@interface IESECWinHybridSortCell : UICollectionViewCell

@property (retain, nonatomic) IESECWinSortCell *sortCell;
@property (retain, nonatomic) IESECWinFilterCell *filterCell;
@property (retain, nonatomic) IESECWinCategoryContainerCell *categoryContainerCell;

- (void)updateSortSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateCategorySize:(struct CGSize { double x0; double x1; })a0 sortShow:(BOOL)a1;
- (void)updateFilterSize:(struct CGSize { double x0; double x1; })a0 sortShow:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpConstraints;

@end
