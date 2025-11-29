@class NSString, NSMutableDictionary;

@interface ACCTagsCameraPositionListDataController : NSObject

@property (retain, nonatomic) NSString *currentKeyword;
@property (nonatomic) long long currentCursor;
@property (retain, nonatomic) NSMutableDictionary *cachedRecommendResult;
@property (nonatomic) BOOL currentItemIsRequestingRecommendData;
@property (copy, nonatomic) NSString *currentItemID;

- (void)recommendCameraPositionListWithCurrentItemID:(id)a0 currentFrameUri:(id)a1 completion:(id /* block */)a2;
- (id)getCachedCameraPositionListForFrameUri:(id)a0;
- (void)searchCameraPositionListWithKeyword:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreCameraPositionListWithKeyword:(id)a0 completion:(id /* block */)a1;
- (id)cacheKeyForFrameUri:(id)a0;
- (void)sendRecommendRequestWithCurrentFrameImage:(id)a0 itemID:(id)a1 completion:(id /* block */)a2;
- (void)sendSearchRequestWithKeyword:(id)a0 isLoadMore:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
