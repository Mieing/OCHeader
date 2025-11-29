@protocol MMUIHookViewDelegate;

@interface MMUIHookView : MMUIView

@property (weak, nonatomic) id<MMUIHookViewDelegate> m_delegate;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
