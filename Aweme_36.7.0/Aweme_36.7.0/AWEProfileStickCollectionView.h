@class NSString, NSMutableArray, AWEProfileStickCollectionViewDelegateForwarder;

@interface AWEProfileStickCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEProfileStickCollectionViewDelegateForwarder *awelistkit_delegateForwarder;
@property (retain, nonatomic) NSMutableArray *awelistkit_observedViews;
@property (nonatomic) BOOL awelistkit_isObserving;
@property (nonatomic) BOOL awelistkit_lock;
@property (nonatomic) double profileStick_stickOffsetY;
@property (nonatomic) BOOL profileStick_resetContentOffsetIfContainerScrollsToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObservedViews;
- (void)addObserverToView:(id)a0;
- (void)removeObserverFromView:(id)a0;
- (void)scrollView:(id)a0 setContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)addObservedView:(id)a0;
- (void)awelistkit_scrollViewDidEndScrolling;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)initialize;
- (void)scrollViewDidScroll:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (BOOL)_gestureRecognizerShouldBegin:(id)a0;

@end
