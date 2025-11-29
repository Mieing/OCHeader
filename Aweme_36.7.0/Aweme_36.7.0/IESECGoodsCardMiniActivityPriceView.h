@class IESECInsetsLabel, UIStackView, IESECGoodsPriceLabel, IESECGoodsDetailParameters, UILabel;

@interface IESECGoodsCardMiniActivityPriceView : UIView <IESECLLComponent>

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) UIStackView *container;
@property (retain, nonatomic) IESECInsetsLabel *activityLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *marketPriceLabel;
@property (retain, nonatomic) IESECInsetsLabel *depositLabel;
@property (retain, nonatomic) IESECInsetsLabel *depositPresaleLabel;
@property (retain, nonatomic) UILabel *salesLabel;

- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
