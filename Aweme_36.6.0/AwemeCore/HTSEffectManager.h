@class HTSVideoData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HTSEffectManager : NSObject <NSCopying> {
    void *operationQueueKey;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (weak, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) NSMutableArray *operationTimeRange;
@property (nonatomic) long long currTimeMachineType;
@property (nonatomic) double videoDuration;
@property (nonatomic) double timeMachineBeginTime;
@property (nonatomic) double timeMachineBeginTimeProcessed;
@property (nonatomic) double newTimeMachineDuration;
@property (nonatomic) long long currentOperationNum;
@property (retain, nonatomic) HTSEffectManager *previousManager;
@property (nonatomic) BOOL isNewTimeMachine;
@property (retain, nonatomic) NSMutableArray *effectiveTimeRange;

- (void)cleanOperation;
- (id)initWithVideoData:(id)a0 operationDictionary:(id)a1;
- (void)convertStringToTimeInfo:(id)a0;
- (void)reCalculateEffectiveTimeRange;
- (void)runSyncInBlock:(id /* block */)a0;
- (id)getTimeMachineTypeWithArray:(id)a0;
- (id)getOperationArray:(id)a0;
- (void)addOperationforReverse:(id)a0;
- (void)addOperationforTrap:(id)a0;
- (void)addOperationforRelativity:(id)a0;
- (id)isEffectTimeRangeEffective:(id)a0;
- (id)startCheckEffectTimeRangeEffective:(id)a0 withCount:(long long)a1;
- (void)machineTypeConvertToNormal;
- (void)machineTypeConvertFromNormalToReverse:(double)a0;
- (void)machineTypeConvertFromNormalToTrap:(double)a0 beginTime:(double)a1;
- (void)machineTypeConvertFromNormalToRelativity:(double)a0 beginTime:(double)a1;
- (void)newTimeMachineTranstoReverseWithTimeRange:(id)a0 operationTimeRange:(id)a1 duration:(double)a2;
- (void)timeMachineTranstoReverseWithTimeRange:(id)a0 operationTimeRange:(id)a1 duration:(double)a2;
- (void)timeMachineTranstoRelativityWithTimeRange:(id)a0 operationTimeRange:(id)a1 duration:(double)a2 beginTime:(double)a3;
- (BOOL)timeMachineTranstoTrapWithTimeRange:(id)a0 operationTimeRange:(id)a1 duration:(double)a2 beginTime:(double)a3;
- (void)trapHTSTimeRange:(id)a0 withSourceTimeRange:(id)a1 timeRangeArray:(id)a2 beginTime:(double)a3;
- (void)addOperationWithType:(unsigned long long)a0 startTime:(double)a1 endTime:(double)a2;
- (id)getCurrentEffectId:(double)a0;
- (void)updateEffectTimeRange:(id)a0 startTime:(double)a1 endTime:(double)a2;
- (id)addOperationWithEffectId2:(id)a0 startTime:(double)a1 endTime:(double)a2;
- (void)addOperationWithEffectId:(id)a0 startTime:(double)a1 endTime:(double)a2;
- (double)removeLastOperation;
- (double)removeEffectWithRangeID:(id)a0 pathId:(id *)a1;
- (id)getLastOperationTimeRange;
- (unsigned long long)getCurrentEffect:(double)a0;
- (void)adjustWithNewTimeMachineType:(long long)a0 beginTime:(double)a1 endTime:(double)a2 duration:(double)a3;
- (void)adjustWithMachineType:(long long)a0 beginTime:(double)a1 duration:(double)a2;
- (void)newTimeMachineTypeConvertFromNormalToReverse:(double)a0;
- (id)getEffectiveTimeRange;
- (BOOL)isEffectNeedHighBitrate;
- (id)getCurrentEffectTimeRange:(double)a0;
- (id)initWithVideoData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getDictionary;

@end
