@class CSJNativeExpressAdConverter, NSArray, NSString, NSMutableArray, CSJAdSlot;
@protocol CSJNativeExpressAdViewDelegate, CSJNativeAdsManagerDelegate;

@interface CSJNativeAdsManager : NSObject <CSJNativeExpressAdConverterDelegate, CSJMopubAdMarkUpDelegate>

@property (retain, nonatomic) NSMutableArray *adData;
@property (retain) CSJNativeExpressAdConverter *nativeExpressAdConverter;
@property (nonatomic) BOOL didSetADM;
@property (retain, nonatomic) CSJAdSlot *adslot;
@property (copy) NSArray *data;
@property (weak, nonatomic) id<CSJNativeAdsManagerDelegate> delegate;
@property (weak, nonatomic) id<CSJNativeExpressAdViewDelegate> nativeExpressAdViewDelegate;
@property (nonatomic) struct CGSize { double x0; double x1; } adSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportReceiveUnionPlatformMaterialsTimeTracker;
- (id)expressAdViewDelegateInNativeExpressAdConverter:(id)a0;
- (id)expressAdViewDismissDelegateInNativeExpressAdConverter:(id)a0;
- (void)nativeExpressAdConverter:(id)a0 nativeExpressAdViewArray:(id)a1;
- (void)setAdMarkup:(id)a0;
- (id)biddingToken;
- (void)safeDelegate_nativeAdsManager:(id)a0 didFailWithError:(id)a1;
- (void)fetchAdDataWithTimes:(long long)a0;
- (void)preLoadTask;
- (void)safeDelegate_nativeAdsManagerSuccessToLoad:(id)a0 nativeAds:(id)a1 isMopub:(BOOL)a2;
- (id)assemblyNativeADWithMaterials:(id)a0 auctionPrice:(id)a1;
- (BOOL)pbu_markupPreCacheAdm:(id)a0 successLoadVideo:(id /* block */)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (BOOL)pbu_markupPreFetchAdm:(id)a0 successLoadVideo:(id /* block */)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (BOOL)pbu_markupAsyncPackageAdm:(id)a0 successLoadVideo:(id /* block */)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (void)pbu_markupAdm:(id)a0 successLoadVideo:(id /* block */)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (void)new_pbu_markupAdm:(id)a0 successLoadVideo:(id /* block */)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
- (void)loadAdDataWithCount:(long long)a0;
- (void)preLoadMiddlePageWithAd:(id)a0;
- (void)safeDelegate_nativeExpressAdSuccessToLoad:(id)a0 views:(id)a1;
- (void)loadAdDataWithCount:(long long)a0 invokeByPublisher:(BOOL)a1;
- (void)setMopubAdMarkUp:(id)a0 successLoadVideo:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithSlot:(id)a0;

@end
