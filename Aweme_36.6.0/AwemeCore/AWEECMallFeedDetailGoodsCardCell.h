@class AWEAwemeModel, UIView, AWEECCustomPriceLabel, UIImageView, AWEECMallFeedDetailGoodsCardStackView, IESECGoodsDetailParameters, UILabel, AWEECMallFeedProductModel;

@interface AWEECMallFeedDetailGoodsCardCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEECMallFeedDetailGoodsCardStackView *tagStackView;
@property (retain, nonatomic) AWEECCustomPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (retain, nonatomic) IESECGoodsDetailParameters *goodsParameters;
@property (retain, nonatomic) AWEECMallFeedProductModel *productInfo;

- (void)configProductTags:(id)a0;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
