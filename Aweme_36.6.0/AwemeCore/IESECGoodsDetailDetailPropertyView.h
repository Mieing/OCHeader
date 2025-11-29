@class UIStackView, IESECLongContentLabelView, IESECGoodsDetailDetailTopInfoViewModel, IESECButton, IESECGoodsDetailDetailTopInfoMetaModel, IESECGoodsDetailDetailTopInfoDataModel, UILabel, IESECGoodsDetailDetailPropertySKUFlowView;

@interface IESECGoodsDetailDetailPropertyView : UIView

@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoViewModel *viewModel;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoMetaModel *metaModel;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) IESECGoodsDetailDetailPropertySKUFlowView *propertySKUFlowView;
@property (retain, nonatomic) IESECLongContentLabelView *subProductLabel;
@property (retain, nonatomic) UIStackView *propertyStackView;
@property (retain, nonatomic) IESECButton *morePropertyButton;
@property (nonatomic) BOOL hasSetupSubviews;

- (void)iesec_respondEvent:(id)a0;
- (void)setupSubviewsIfNeeded;
- (void)updateStackView;
- (void)didClickShowMoreProperty;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
