@class UILabel, UIImageView;

@interface CJPayRetainVoucherView : UIView

@property (retain, nonatomic) UILabel *leftMsgLabel;
@property (retain, nonatomic) UILabel *rightMsgLabel;
@property (retain, nonatomic) UIImageView *seperateView;
@property (retain, nonatomic) UILabel *topLeftLabel;

- (void)updateWithRetainMsgModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
