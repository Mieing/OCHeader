@class NSString, AWEBinding, UIScrollView, UIPanGestureRecognizer;

@interface DUXPartialSheetPresentationController : DUXSheetPresentationController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEBinding *scrollViewBinding;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIScrollView *originScrollView;
@property (nonatomic) struct CGPoint { double x; double y; } previouScrollViewContentOffset;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long verticalPanType;
@property (nonatomic) struct CGPoint { double x; double y; } scrollContentOffset;
@property (nonatomic) BOOL shouldChangeContentOffset;
@property (nonatomic) double scrollNewContentOffsetY;
@property (nonatomic) long long scrollNewChangeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollView:(id)a0 contentOffsetDidChange:(struct CGPoint { double x0; double x1; })a1;
- (void)presentedControllerFoldAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentedControllerExpandAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)observeScrollView;
- (void)adjustPresentedViewHeight:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)addTopCornerToPresentedView;
- (void)adjustPresentedViewFrame:(id /* block */)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)presentationTransitionWillBegin;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)didPan:(id)a0;

@end
