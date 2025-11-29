@class BSTCollectionViewDelegateInterceptor, NSString;

@interface BSTCollectionViewDelegateProxy : BSTDelegateProxy <UICollectionViewDelegate, BSTCollectionViewDelegateProxyTargetChangeable>

@property (retain, nonatomic) BSTCollectionViewDelegateInterceptor *interceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bstIsCollectionViewTrackerDecorator;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)respondsToSelector:(SEL)a0;

@end
