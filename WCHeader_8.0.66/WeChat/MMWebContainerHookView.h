@interface MMWebContainerHookView : UIView

@property (copy, nonatomic) id /* block */ removeFromSuperviewHookAction;

- (id)initWithHookAction:(id /* block */)a0;
- (void)removeFromSuperview;
- (void)removeFromSuperviewWithoutHook;
- (void).cxx_destruct;

@end
