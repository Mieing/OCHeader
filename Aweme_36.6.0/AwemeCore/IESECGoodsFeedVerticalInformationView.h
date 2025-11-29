@class UIStackView, _IESECGoodsFeedBuyButton, IESECInsetsLabel, IESECTitleLabel, IESECGoodsPriceLabel, IESECGoodsDetailParameters, IESECFittingSingleLineLabel, IESECBorderedTagStack;
@protocol IESECGoodsFeedVerticalInformationViewDelegate;

@interface IESECGoodsFeedVerticalInformationView : UIView {
    IESECGoodsDetailParameters *_parameters;
    IESECTitleLabel *_titleLabel;
    IESECBorderedTagStack *_tagStack;
    IESECFittingSingleLineLabel *_serviceLabel;
    UIStackView *_priceContainerView;
    IESECGoodsPriceLabel *_priceLabel;
    _IESECGoodsFeedBuyButton *_buyButton;
    IESECInsetsLabel *_priceDiscriptionLabel;
    IESECInsetsLabel *_salesLabel;
}

@property (weak, nonatomic) id<IESECGoodsFeedVerticalInformationViewDelegate> delegate;
@property (nonatomic) BOOL hideBuyButton;
@property (nonatomic) long long maximumNumberOfLinesForTitle;
@property (nonatomic) unsigned long long buttonStyle;
@property (nonatomic) double buttonWidth;
@property (nonatomic) BOOL showSalesInGuaranteedArea;
@property (nonatomic) BOOL exclusiveCouponAndSales;
@property (nonatomic) BOOL hidesAreaBetweenPriceAndBuyButton;

- (void)buyButtonDidClick:(id)a0;
- (id)salesText;
- (void)updateWithParameters:(id)a0;
- (void)updatePrice;
- (id)horizontalSpacerView;
- (void)updateBorderedTag;
- (void)updateServiceLabel;
- (void)updateBuyButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
