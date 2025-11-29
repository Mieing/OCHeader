@class UILabel, UIImageView;

@interface AWEListenFeedPlayControlItemView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ tapped;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tap;

@end
