@class UIImageView, UILabel, UIView, UIButton;

@interface IESECMallErrorPageView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIButton *refreshButton;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)showEmpty;
- (void)refreshButtonTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showError;
- (void)setUpViews;

@end
