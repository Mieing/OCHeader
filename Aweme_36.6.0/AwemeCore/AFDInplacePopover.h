@class AFDInplacePopoverTransitionView;

@interface AFDInplacePopover : AFDPopover

@property (weak, nonatomic) AFDInplacePopoverTransitionView *transitionView;

- (void)showWithView:(id)a0 containerView:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)handleBackgroundPan:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)handleBackgroundTap:(id)a0;

@end
