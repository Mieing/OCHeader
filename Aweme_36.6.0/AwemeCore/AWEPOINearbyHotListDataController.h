@class NSMutableDictionary, NSString, AWEPOINearbyHotPrefetcher, AWERxProperty;

@interface AWEPOINearbyHotListDataController : AWEListDataController

@property (nonatomic) long long page;
@property (nonatomic) long long pageSize;
@property (retain, nonatomic) NSMutableDictionary *rawToFiltered;
@property (retain, nonatomic) AWERxProperty *isRequesting;
@property (retain, nonatomic) AWERxProperty *feedList;
@property (retain, nonatomic) AWERxProperty *hasMoreData;
@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) AWEPOINearbyHotPrefetcher *prefetcher;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (long long)filteredDataSourceIndexFromIndex:(long long)a0;
- (void)p_handleResponse:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)p_fetchData:(id /* block */)a0;
- (id)distanceByLongitude:(double)a0 latitude:(double)a1 longitude:(double)a2 latitude:(double)a3;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
