@class CJPayNoNetworkView, UIView;

@interface CJPayNoNetworkContainerView : UIView

@property (retain, nonatomic) CJPayNoNetworkView *defaultNoNetworkView;
@property (retain, nonatomic) UIView *configErrorView;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (void)showStyle:(unsigned long long)a0;
- (unsigned long long)p_errorViewStyleBy:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
