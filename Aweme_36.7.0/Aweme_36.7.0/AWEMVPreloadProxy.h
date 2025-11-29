@class AWEMVPreloadInterceptor, NSString, UICollectionView;
@protocol UICollectionViewDelegate;

@interface AWEMVPreloadProxy : NSProxy <UICollectionViewDelegate>

@property (weak, nonatomic) id<UICollectionViewDelegate> collectionViewDelegate;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEMVPreloadInterceptor *interceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMVPreloadProxy;
- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0 delegate:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
