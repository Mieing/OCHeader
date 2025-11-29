@class YYCache, HMDThreadSafeArray;
@protocol AWEStorageServiceFileKitResourceMetricInterface;

@interface AWELiteTimerCacheProvider : NSObject

@property (retain, nonatomic) YYCache *timerTaskCache;
@property (retain, nonatomic) HMDThreadSafeArray *tasksIDs;
@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;

- (void)saveTask:(id)a0;
- (void)setupResourceMetric;
- (id)storagedTaskIDs;
- (id)taskWithKey:(id)a0;
- (void)saveTaskIDs;
- (void)clearStoragedTaskIDs;
- (void).cxx_destruct;
- (id)init;

@end
