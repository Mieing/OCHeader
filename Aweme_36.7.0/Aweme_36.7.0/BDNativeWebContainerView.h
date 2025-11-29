@interface BDNativeWebContainerView : UIView

@property (copy, nonatomic) id /* block */ nativeRemoveAction;

- (void)configNativeContainerBeRemovedAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (id)init;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
