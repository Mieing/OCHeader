@class UIStackView, IESECGoodsPriceLabel, UILabel, IESECFeedInnerFlowPriceViewConfig;

@interface IESECFeedInnerFlowPriceView : UIView

@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *salesLabel;
@property (retain, nonatomic) IESECFeedInnerFlowPriceViewConfig *config;
@property (retain, nonatomic) UIStackView *stackView;

- (void)configUI;
- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 config:(id)a1;
- (void)configPriceUIV1WithParameters:(id)a0;
- (void)updateSalesLabelWithParameters:(id)a0;
- (void).cxx_destruct;

@end
