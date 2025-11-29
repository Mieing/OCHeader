@class UILabel, AWEDoubleColumnSearchMerchandiseFilterComponentModel, BDImageView;

@interface AWEEcomSearchSidebarSubfilterCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) BDImageView *headIcon;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;

+ (double)heightWithTitle:(id)a0 width:(double)a1;

- (void)addShapeLayerByRoundingCorners:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
