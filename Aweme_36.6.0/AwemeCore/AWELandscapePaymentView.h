@class UIStackView, NSString, UILabel, UIView;
@protocol AWEEntertainmentMultipleEventsViewProtocol;

@interface AWELandscapePaymentView : UIView <AWELandscapePaymentViewProtocol>

@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UILabel *paymentTipsLabel;
@property (retain, nonatomic) UIView<AWEEntertainmentMultipleEventsViewProtocol> *multipleEventsView;
@property (copy, nonatomic) id /* block */ didTapPaymentButtonBlock;
@property (copy, nonatomic) id /* block */ didTapRightEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTipsLabelText:(id)a0;
- (void)setButtonEventStyle:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setButtonEventText:(id)a0 forIndex:(long long)a1;
- (void)setPaymentButtonText:(id)a0;
- (void)didClickPaymentButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
