@class UILabel;

@interface AWERichGoodsProgressCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;

- (void)steupUI;
- (void)updateSelectedUI;
- (void)updateDeselectedUI;
- (void)updateWithName:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
