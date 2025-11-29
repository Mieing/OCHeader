@class UILabel, UIView;

@interface IESLiveVideoAdjustPanelCategoryCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *selectLine;
@property (retain, nonatomic) UIView *redDot;

- (void)configSubviews;
- (void)updateCellTitle:(id)a0 showRedDot:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
