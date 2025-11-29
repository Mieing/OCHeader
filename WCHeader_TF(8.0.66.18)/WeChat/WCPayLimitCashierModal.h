@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface WCPayLimitCashierModal : UIView

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentsView;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)initWithTitle:(id)a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapConfirm;
- (void)dissmissView;
- (void)showInView;
- (void).cxx_destruct;

@end
