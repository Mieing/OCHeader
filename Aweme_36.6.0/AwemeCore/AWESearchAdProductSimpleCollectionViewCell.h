@class UIImageView, UILabel, AWEDoubleColumnSearchAdProductInfoModel;

@interface AWESearchAdProductSimpleCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEDoubleColumnSearchAdProductInfoModel *adProductInfo;
@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *tagLabel;

+ (id)identifier;

- (id)douyinNumberABCFontOfSize:(double)a0;
- (void)configAdProductCellWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
