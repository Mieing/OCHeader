@class NSString, NSMutableArray, IESECListKitStickCollectionViewDelegateForwarder;

@interface IESECListKitStickCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (nonatomic) double ieseclistkit_stickOffsetY;
@property (retain, nonatomic) IESECListKitStickCollectionViewDelegateForwarder *ieseclistkit_delegateForwarder;
@property (retain, nonatomic) NSMutableArray *ieseclistkit_observedViews;
@property (nonatomic) BOOL ieseclistkit_isObserving;
@property (nonatomic) BOOL ieseclistkit_lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObservedViews;
- (void)addObserverToView:(id)a0;
- (void)removeObserverFromView:(id)a0;
- (void)scrollView:(id)a0 setContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)addObservedView:(id)a0;
- (void)ieseclistkit_scrollViewDidEndScrolling;
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
