@class AVAsset, NSMutableArray, NSMutableDictionary;

@interface IESMMTimeMachine : IESMMObject

@property (retain, nonatomic) NSMutableArray *currentTimeMachineRange;
@property (retain, nonatomic) NSMutableArray *allTimeMachineRange;
@property (nonatomic) long long currTimeMachineType;
@property (retain, nonatomic) NSMutableDictionary *timeMachineBeginTimes;
@property (retain, nonatomic) NSMutableDictionary *timeMachineStartTimes;
@property (retain, nonatomic) AVAsset *reverseSrcAsset;
@property (retain, nonatomic) AVAsset *reverseAsset;
@property (nonatomic) BOOL isNewTimeMachine;
@property (retain, nonatomic) NSMutableDictionary *timeMachineDurations;
@property (nonatomic) double earliestTimeMachineTime;
@property (nonatomic) double allVideoDuration;
@property (nonatomic) double durationWithTimeMachine;

- (void)clearReverseAsset;
- (void)updateBeginTime:(double)a0 andStartTime:(double)a1 type:(long long)a2;
- (double)caculateTimeMachineRangeDesInTime:(id)a0;
- (double)caculateTimeMachineRangeDesoutTime:(id)a0;
- (void)updateAndGenerateAllTimeRange;
- (double)beginTimeWithType:(long long)a0;
- (double)startTimeWithType:(long long)a0;
- (double)currentTimeMachineDurationWithType:(long long)a0;
- (double)p_convertTimeMachinTimeToRealTimeFromRange:(id)a0 realTime:(double)a1;
- (double)currentTimeMachineDuration;
- (BOOL)isNewTimeMapNeeded;
- (BOOL)isNewTimeMapNeededWithoutReverse;
- (BOOL)isReverseStatusReady;
- (BOOL)isOldTimeMachineUpdateNeeded;
- (BOOL)isNewTimeMachineReverse;
- (BOOL)isOldTimeMachineReverse;
- (void)updateBeginTime:(double)a0 type:(long long)a1;
- (void)updateTimeMachineWithConfig:(id)a0;
- (double)currentBeginTime;
- (double)convertTimeMachinTimeToRenderTime:(double)a0;
- (double)convertRenderTimeToTimeMachinTime:(double)a0;
- (double)getTheRealDesOutTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })convertToTimemachinTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)currentStartTime;

@end
