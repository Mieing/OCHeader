@class NSString, NSMutableArray, UICollectionView;
@protocol AWECollectionViewItemDisplayDelegateTarget;

@interface AWECollectionViewItemDisplayDelegate : NSProxy <UICollectionViewDelegate>

@property (nonatomic) struct __CFRunLoopObserver { } *sleepObserver;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWECollectionViewItemDisplayDelegateTarget> target;
@property (retain, nonatomic) NSMutableArray *visibleItems;
@property (nonatomic) BOOL isDisplayChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupRunloopObserver;
- (void)startObserverIfNeeded;
- (id)initWithCollectionView:(id)a0 target:(id)a1;
- (void)invalidateItems:(id)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
