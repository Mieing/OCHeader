@class NSError, AWEPOINearbyHotListDataResponse;
@protocol AWEHttpTask;

@interface AWEPOINearbyHotPrefetcher : NSObject

@property (retain, nonatomic) AWEPOINearbyHotListDataResponse *prefetchedReponse;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id<AWEHttpTask> currentTask;

- (void)prefetchWithPOIID:(id)a0 completion:(id /* block */)a1;
- (void)fetchResponse:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clear;

@end
