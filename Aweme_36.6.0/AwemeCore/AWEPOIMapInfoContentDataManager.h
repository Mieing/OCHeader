@class AWEPOINearbyHotListDataResponse, AWEPOINearbyHotPrefetcher, NSString, NSError, NSObject, AWEPOINearbyRecommendationDataResponse;
@protocol OS_dispatch_group;

@interface AWEPOIMapInfoContentDataManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) AWEPOINearbyHotPrefetcher *prefetcher;
@property (retain, nonatomic) AWEPOINearbyRecommendationDataResponse *nearbyRecResponse;
@property (retain, nonatomic) NSError *nearbyRecResponseError;
@property (retain, nonatomic) AWEPOINearbyHotListDataResponse *nearbyHotListResponse;
@property (nonatomic) BOOL shouldDisplayNearbyRecSection;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *poiId;

- (id)initWithPrefetcher:(id)a0;
- (void)requestDataWithPOIId:(id)a0 saleChannel:(id)a1 shouldFetchHotVideo:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_requestNearbyRecData:(id)a0;
- (void)p_requestNearbyHotVideoData;
- (void)p_resolveResponse;
- (void).cxx_destruct;

@end
