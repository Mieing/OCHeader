@class UIView;

@interface AWELiveAcqCastVideoFloatingBackgroundView : UIView

@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (copy, nonatomic) id /* block */ didClickFloatingButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
