@class UIButton;

@interface AWEShareReportButtonContainerView : UIView

@property (retain, nonatomic) UIButton *reportButton;
@property (copy, nonatomic) id /* block */ reportButtonClick;

- (void)reportButtonAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
