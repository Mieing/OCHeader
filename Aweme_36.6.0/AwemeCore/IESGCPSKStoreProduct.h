@class IESGCPSKContext, NSString, IESGCPSKStoreProductTimeRecorder, NSCache;

@interface IESGCPSKStoreProduct : NSObject <IESGCPSKStoreProductInterface>

@property (retain, nonatomic) IESGCPSKContext *openContext;
@property (retain, nonatomic) NSCache *storeProductLoadItemCache;
@property (retain, nonatomic) IESGCPSKStoreProductTimeRecorder *timeRecorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)supportPreloadType;
- (void)preloadStoreProductViewControllerWithContext:(id)a0 loadCompletionCallBack:(id /* block */)a1 failureCallBack:(id /* block */)a2;
- (void)openStoreProductViewControllerWithContext:(id)a0 loadCompletionCallBack:(id /* block */)a1 presentCallBack:(id /* block */)a2 dismissCallBack:(id /* block */)a3 failureCallBack:(id /* block */)a4;
- (id)loadItemWithAppID:(id)a0;
- (void)loadStoreProductWithItem:(id)a0 context:(id)a1 loadCompletionCallBack:(id /* block */)a2 failureCallBack:(id /* block */)a3;
- (void)roateToPortraitIfNeedWithCompletion:(id /* block */)a0;
- (void)openStoreProductViewControllerWithContext:(id)a0;
- (void).cxx_destruct;

@end
