@class UILabel, UIButton;

@interface AWEPayRPDetailPromotionView : UIView

@property (retain, nonatomic) UILabel *promotionDescLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ buttonClickBlock;

- (void)updateWithPromotionInfo:(id)a0;
- (void)p_confirmButtonClicked;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
