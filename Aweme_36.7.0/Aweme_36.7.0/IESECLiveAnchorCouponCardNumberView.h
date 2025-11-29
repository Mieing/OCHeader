@class UILabel;

@interface IESECLiveAnchorCouponCardNumberView : UIView

@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *currencyLabel;
@property (retain, nonatomic) UILabel *discountTextLabel;
@property (retain, nonatomic) UILabel *detailLabel;

- (void)updateWithNumberText:(id)a0 detail:(id)a1 type:(long long)a2;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;

@end
