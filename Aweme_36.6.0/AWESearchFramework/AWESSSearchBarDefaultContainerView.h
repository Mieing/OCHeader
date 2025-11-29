@class UIView;

@interface AWESSSearchBarDefaultContainerView : UIView <AWESSSearchBarElementContainerProtocol>

@property (retain, nonatomic) UIView *contentView;

- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addSubview:(id)a0;
- (void)layoutSubviews;

@end
