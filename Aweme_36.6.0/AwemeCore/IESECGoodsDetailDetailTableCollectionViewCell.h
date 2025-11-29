@class IESECGoodsDetailDetailPropertyView, IESECGoodsDetailDetailTopInfoViewModel;

@interface IESECGoodsDetailDetailTableCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESECGoodsDetailDetailPropertyView *detailPropertyView;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoViewModel *viewModel;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) double previousScaleFactor;

- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
