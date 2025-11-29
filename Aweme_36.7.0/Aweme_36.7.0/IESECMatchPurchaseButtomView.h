@class IESECGoodsPriceLabel, UILabel, IESECButton, IESECMatchPurchaseModel;

@interface IESECMatchPurchaseButtomView : UIView

@property (retain, nonatomic) IESECButton *checkButton;
@property (retain, nonatomic) IESECButton *confirmButton;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) IESECMatchPurchaseModel *model;
@property (copy, nonatomic) id /* block */ selectAll;
@property (copy, nonatomic) id /* block */ confirmTap;

- (void)tapSelectAll;
- (void)tapBuyNow;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateUI;

@end
