@class IESECGoodsDetailLongTitleTagInfoView, UIStackView, IESECGoodsDetailHaiNanTaxViewMetaModel, IESECGoodsDetailHaiNanTaxDataModel;

@interface IESECGoodsDetailHaiNanTaxCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESECGoodsDetailLongTitleTagInfoView *titleTagInfoView;
@property (retain, nonatomic) UIStackView *groupTabItemStackView;
@property (retain, nonatomic) UIStackView *container;
@property (retain, nonatomic) IESECGoodsDetailHaiNanTaxDataModel *hainanTaxDataModel;
@property (retain, nonatomic) IESECGoodsDetailHaiNanTaxViewMetaModel *metaModel;

- (id)createHeadButtonWithElement:(id)a0;
- (void)tapTabButton:(id)a0;
- (void)openDeliveryDesc:(id)a0;
- (void)configureHaiNanTaxCellWithDataModel:(id)a0 metaModel:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
