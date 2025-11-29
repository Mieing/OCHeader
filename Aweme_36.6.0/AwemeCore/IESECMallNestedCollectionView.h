@class UIScrollView, IESECMallNestedCollectionViewDelegateForwarder, NSString;

@interface IESECMallNestedCollectionView : UICollectionView

@property (retain, nonatomic) IESECMallNestedCollectionViewDelegateForwarder *delegateForwarder;
@property (nonatomic) double expandHeight;
@property (weak, nonatomic) UIScrollView *nestedScrollView;
@property (weak, nonatomic) UIScrollView *nestedInLynxFoldScrollView;
@property (copy, nonatomic) NSString *contentOffsetObserverToken;
@property (nonatomic) double threshold;
@property (nonatomic) BOOL scrollAttached;
@property (nonatomic) BOOL forceScrollDetach;
@property (nonatomic) BOOL forceScrollDetachWhileIdling;
@property (nonatomic) BOOL allowNestScrollViewBounces;
@property (nonatomic) BOOL duringKVO;
@property (nonatomic) BOOL duringDidScroll;
@property (nonatomic) BOOL lastIsFoldState;

- (BOOL)isFold;
- (BOOL)checkVisibleVerticalScrollView:(id)a0;
- (BOOL)checkNestedScrollView:(id)a0;
- (BOOL)checkAttached;
- (void)clearNestedScrollView;
- (BOOL)isFullyExpand;
- (BOOL)scrollToTopAnimatedIfNeeded:(BOOL)a0;
- (double)adjustedContentOffsetY;
- (void)changeExpandHeightIfNeeded:(double)a0;
- (BOOL)isNestedSpecialView:(id)a0;
- (id)getNestedScrollView;
- (id)findNestedScrollViewInViewTree:(id)a0;
- (void)contentOffsetDidChange:(id)a0;
- (BOOL)hasSubviewAndNotHidden:(id)a0 forView:(id)a1;
- (void)changeFoldStateIfNeeded;
- (void)forwarderScrollViewDidScroll:(id)a0;
- (BOOL)forwarderScrollViewShouldScrollToTop:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
