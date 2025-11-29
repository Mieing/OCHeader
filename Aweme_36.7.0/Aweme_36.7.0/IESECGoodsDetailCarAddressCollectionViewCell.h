@class IESECGoodsDetailCarAddressMetaModel, IESECGoodsDetailCarAddressDataModel, IESECGoodsDetailCarAddressViewModel, IESECLongContentLabelView, UILabel;

@interface IESECGoodsDetailCarAddressCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESECLongContentLabelView *titleView;
@property (retain, nonatomic) UILabel *mainTextView;
@property (retain, nonatomic) UILabel *distanceTextView;
@property (retain, nonatomic) UILabel *subTextView;
@property (retain, nonatomic) IESECGoodsDetailCarAddressMetaModel *metaModel;
@property (retain, nonatomic) IESECGoodsDetailCarAddressDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailCarAddressViewModel *viewModel;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) double previousScaleFactor;

- (void)openCarAddressSelectLynxView:(id)a0;
- (void)configureCellWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
