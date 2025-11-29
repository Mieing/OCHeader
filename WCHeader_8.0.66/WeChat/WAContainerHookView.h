@interface WAContainerHookView : UIView

@property (copy, nonatomic) id /* block */ wa_removeFromSuperviewHookAction;

- (id)initWithHookAction:(id /* block */)a0;
- (void)removeFromSuperview;
- (void)removeFromSuperviewWithoutHook;
- (void).cxx_destruct;

@end
