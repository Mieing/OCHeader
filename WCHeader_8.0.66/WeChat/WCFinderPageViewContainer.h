@class NSString, NSMutableDictionary;
@protocol WCFinderPageViewContainerDelegate;

@interface WCFinderPageViewContainer : MMScrollView <WCFinderFeedFlowViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableDictionary *index2ViewDict;
@property (nonatomic) unsigned long long dragCount;
@property (weak, nonatomic) id<WCFinderPageViewContainerDelegate> containerDelegate;
@property (nonatomic) double contentTopInset;
@property (nonatomic) double linkedContentOffsetY;
@property (nonatomic) double topOffsetWhenHover;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) unsigned long long selectedFilterIndex;
@property (nonatomic) unsigned long long pageViewCount;
@property (nonatomic) BOOL delayPageViewCreateTime;
@property (nonatomic) BOOL lazyLoadingDisabled;
@property (nonatomic) BOOL allowContentInsetChangeWhenPageIsNotAtTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)removeObserverForFlowView:(id)a0;
- (void)addObserverForFlowView:(id)a0;
- (void)reset;
- (id)pageViewAtIndex:(unsigned long long)a0;
- (void)scrollToTop;
- (void)initContainer;
- (void)addPageView:(id)a0 atIndex:(unsigned long long)a1;
- (void)removePageViewAtIndex:(unsigned long long)a0;
- (void)adjustPageViewContentOffset:(id)a0;
- (void)displayPageViewAtIndex:(unsigned long long)a0;
- (void)callDelegateIfNeedForPageViewSwithToIndex:(unsigned long long)a0;
- (void)loadAllPageView;
- (void)setupPageViewAtIndex:(unsigned long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)checkDidSwitchToTargetIndex;
- (void)setScrollEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
