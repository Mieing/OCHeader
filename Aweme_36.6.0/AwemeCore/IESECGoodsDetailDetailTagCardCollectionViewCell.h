@class UIImageView, IESECGoodsDetailDetailTopInfoDataModel;

@interface IESECGoodsDetailDetailTagCardCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoDataModel *dataModel;

- (void)tapCell;
- (void)configCellWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
