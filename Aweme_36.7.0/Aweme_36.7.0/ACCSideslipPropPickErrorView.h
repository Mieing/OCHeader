@class UIButton;
@protocol ACCSideslipPropPickErrorViewDelegate;

@interface ACCSideslipPropPickErrorView : UIView

@property (retain, nonatomic) UIButton *retryButton;
@property (weak, nonatomic) id<ACCSideslipPropPickErrorViewDelegate> delegate;

- (void)onRetryButtonClick:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
