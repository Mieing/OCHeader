@class NSString, UIView;
@protocol WCSplitOverDetailContextPresentationDelegate;

@interface WCSplitOverDetailContextPresentationController : UIPresentationController <WCSplitTransitionExt>

@property (retain, nonatomic) UIView *dimmingMaskView;
@property (nonatomic) BOOL isTransitioning;
@property (weak, nonatomic) id<WCSplitOverDetailContextPresentationDelegate> overDetailDelegate;
@property (nonatomic) BOOL maskHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRemovePresentersView;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (void)containerViewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)notifySplitOverDetailContextMaskHidden:(BOOL)a0;
- (void)updatePresentedViewFrameWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
