@protocol WCSplitDetailPresentationControllerDelegate;

@interface WCSplitDetailPresentationController : UIPresentationController

@property (nonatomic) BOOL isChangingSize;
@property (copy, nonatomic) id /* block */ transtionEndHandler;
@property (nonatomic) double primaryWidth;
@property (weak, nonatomic) id<WCSplitDetailPresentationControllerDelegate> splitDelegate;

- (void)updatePresentedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayMode:(long long)a1;
- (BOOL)shouldRemovePresentersView;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)isInBackground;
- (void).cxx_destruct;

@end
