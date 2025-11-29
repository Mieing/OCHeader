@class UIImageView, UILabel;

@interface CJPayLoginBillStatusView : UIView

@property (retain, nonatomic) UIImageView *statusIcon;
@property (retain, nonatomic) UILabel *tipLabel;

- (void)showStatus:(long long)a0 msg:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
