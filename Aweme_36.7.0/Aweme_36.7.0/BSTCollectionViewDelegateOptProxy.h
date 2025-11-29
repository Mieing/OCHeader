@class BSTCollectionViewDelegateInterceptor, NSString;

@interface BSTCollectionViewDelegateOptProxy : NSProxy <BSTCollectionViewDelegateProxyTargetChangeable>

@property (weak, nonatomic) id target;
@property (retain, nonatomic) BSTCollectionViewDelegateInterceptor *interceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyWithTarget:(id)a0;

- (void)changeTarget:(id)a0;
- (BOOL)bstIsCollectionViewTrackerDecorator;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
