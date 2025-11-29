@class NSString, UIImageView, UILabel, UIView, WCFinderMaskButton;
@protocol WCFinderMembershipPaymentBottomViewDelegate;

@interface WCFinderMembershipPaymentBottomView : UIView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIImageView *priceCoinIcon;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *cycleLabel;
@property (retain, nonatomic) WCFinderMaskButton *confirmButton;
@property (copy, nonatomic) NSString *priceLabelStr;
@property (copy, nonatomic) NSString *confirmBtnStr;
@property (weak, nonatomic) id<WCFinderMembershipPaymentBottomViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 priceLabelStr:(id)a1 confirmBtnStr:(id)a2;
- (void)setupSubviews;
- (void)updateMemberPrice:(unsigned long long)a0;
- (void)onClickConfirm;
- (void).cxx_destruct;

@end
