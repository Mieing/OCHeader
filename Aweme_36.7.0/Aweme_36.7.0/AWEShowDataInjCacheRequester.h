@class NSMutableDictionary, AWEShowDatainjCacheTracker;

@interface AWEShowDataInjCacheRequester : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestInfos;
@property (retain, nonatomic) NSMutableDictionary *requestFailedInfos;
@property (weak, nonatomic) AWEShowDatainjCacheTracker *tracker;

- (void)fetchDataForConfig:(id)a0 fetchDataInfo:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasRunningTaskWithConfig:(id)a0 businessID:(id)a1;
- (BOOL)hasFailedTaskWithConfig:(id)a0 businessID:(id)a1;
- (void)removeFailedTaskWithConfig:(id)a0 businessID:(id)a1;
- (void)fetchMultipleDataForConfig:(id)a0 fetchDataInfo:(id)a1 completion:(id /* block */)a2;
- (void)fetchSingleDataForConfig:(id)a0 fetchDataInfo:(id)a1 completion:(id /* block */)a2;
- (id)createRequestKeyWithSceneID:(id)a0 businessID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
