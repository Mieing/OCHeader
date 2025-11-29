@class NSMutableArray;
@protocol BDDPBizConfiguring;

@interface BDDynamicPerformanceMappingCenter : NSObject

@property long long index;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (weak, nonatomic) id<BDDPBizConfiguring> bizConfig;
@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long countPerLog;
@property (nonatomic) unsigned long long bufferLimitCount;

- (void)checkForUpload;
- (void)uploadPerformanceMapInfoAndRemoveAllImmediately;
- (void)uploadPerformanceMapInfoAndMarkBatchEnd;
- (void)uploadPerformanceMapInfoAndRemoveAll:(BOOL)a0;
- (void)uploadPerformanceMapInfo:(long long)a0;
- (void)uploadPerformanceMapInfo:(long long)a0 batchEnd:(long long)a1;
- (id)getStartTimeStamp;
- (id)syncQueue;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (unsigned long long)count;

@end
