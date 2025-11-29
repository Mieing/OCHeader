@class WCFinderPaymentBottomViewConfig, UIImageView, UILabel, UIView, WCFinderMaskButton;
@protocol WCFinderPaymentBottomViewDelegate;

@interface WCFinderPaymentBottomView : UIView

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIImageView *priceCoinIcon;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *priceDescLabel;
@property (retain, nonatomic) WCFinderMaskButton *confirmButton;
@property (retain, nonatomic) WCFinderPaymentBottomViewConfig *config;
@property (nonatomic) double layoutWidth;
@property (weak, nonatomic) id<WCFinderPaymentBottomViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithConfig:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onClickConfirm;
- (void).cxx_destruct;

@end
