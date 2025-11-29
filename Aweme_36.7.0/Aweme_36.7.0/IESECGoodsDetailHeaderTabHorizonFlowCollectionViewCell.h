@class UILabel;

@interface IESECGoodsDetailHeaderTabHorizonFlowCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL isSelectedState;

- (void)configWithModel:(id)a0;
- (void)updateFontColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
