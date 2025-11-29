@class UILabel, AWEButton, UIView;

@interface AWEIMTranspondListAlertBottomView : UIView

@property (retain, nonatomic) UIView *longSeparateView;
@property (retain, nonatomic) UIView *shortSeparateView;
@property (retain, nonatomic) UILabel *duoshanLabel;
@property (retain, nonatomic) AWEButton *cancelBtn;
@property (retain, nonatomic) AWEButton *certainBtn;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
