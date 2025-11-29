@protocol AWEStickCollectionViewDelegate;

@interface AWEStickCollectionView : UICollectionView {
    BOOL _shouldStickFlag;
}

@property (weak, nonatomic) id<AWEStickCollectionViewDelegate> awestickcollectionview_delegate;

- (void)removeObservedViews;
- (id)awelistkit_delegateForwarder;
- (void)setAwelistkit_isObserving:(BOOL)a0;
- (void)setAwelistkit_lock:(BOOL)a0;
- (id)awelistkit_observedViews;
- (void)addObserverToView:(id)a0;
- (void)removeObserverFromView:(id)a0;
- (BOOL)awelistkit_isObserving;
- (void)scrollView:(id)a0 setContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)awelistkit_lock;
- (void)addObservedView:(id)a0;
- (void)awelistkit_scrollViewDidEndScrolling;
- (void)setAwelistkit_delegateForwarder:(id)a0;
- (void)setAwelistkit_observedViews:(id)a0;
- (void)scrollStickCollectionViewToTop:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)initialize;
- (void)scrollViewDidScroll:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (BOOL)_gestureRecognizerShouldBegin:(id)a0;

@end
