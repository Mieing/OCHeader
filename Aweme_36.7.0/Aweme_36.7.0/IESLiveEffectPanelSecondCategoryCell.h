@class UILabel;

@interface IESLiveEffectPanelSecondCategoryCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;

- (void)configSubviews;
- (void)updateCellSelected:(BOOL)a0;
- (void)updateCellTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
