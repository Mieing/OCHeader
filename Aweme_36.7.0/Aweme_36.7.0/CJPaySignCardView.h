@class UILabel, CJPayButton, CJPayStandardButton;

@interface CJPaySignCardView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayButton *closeButton;
@property (retain, nonatomic) CJPayStandardButton *confirmButton;

- (void)updateWithSignCardInfo:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
