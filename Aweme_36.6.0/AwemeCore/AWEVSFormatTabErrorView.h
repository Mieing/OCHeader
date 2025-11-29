@class UIImageView, UILabel, UIButton;

@interface AWEVSFormatTabErrorView : UIView

@property (retain, nonatomic) UIImageView *errorIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *solutionButton;
@property (copy, nonatomic) id /* block */ retryClickBlock;

- (void)showSolution;
- (void)addMasonry;
- (void)themeControl;
- (void)retryButtonClick;
- (void)onRetryButtonClick:(id /* block */)a0;
- (void)updateTopEdg:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)createUI;

@end
