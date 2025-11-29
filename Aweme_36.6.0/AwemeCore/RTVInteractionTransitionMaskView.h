@protocol RxInjector;

@interface RTVInteractionTransitionMaskView : UIView

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)rxAwakeFromPropertyInjection;
- (void)__handleTapGesture:(id)a0;
- (void)__disappearWithAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 snapshotView:(id)a1;

@end
