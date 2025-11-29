@interface AWEIMDYInteractNotificationTaskManager : NSObject

@property (nonatomic) unsigned long long task;
@property (nonatomic) unsigned long long subTask;
@property (nonatomic) double noticeCountRequestTimeStamp;
@property (nonatomic) double diggListTimeStamp;
@property (nonatomic) double atListTimeStamp;
@property (nonatomic) double commentListTimeStamp;
@property (nonatomic) double rewardListTimeStamp;
@property (nonatomic) double flameListTimeStamp;
@property (nonatomic) double moreNoticeListTimeStamp;
@property (nonatomic) double danmakuListTimeStamp;
@property (nonatomic) double recommenndListTimeStamp;
@property (nonatomic) double highFansOtherListTimeStamp;
@property (nonatomic) double recommendPerosonTimeStamp;
@property (nonatomic) double combineTimeStamp;
@property (nonatomic) long long filteredCount;

+ (id)sharedInstance;

- (void)executeRequestTask:(id /* block */)a0 taskType:(unsigned long long)a1;
- (void)assignTasksCompletedWithBlock:(id /* block */)a0;
- (void)executeAssignTask:(id /* block */)a0 subTaskType:(unsigned long long)a1 timestamp:(double)a2 potentialFilterCount:(long long)a3 error:(id)a4;
- (id)__getTypeLogString:(unsigned long long)a0;
- (void)__trackWithInfo:(id)a0;
- (void)updateTimeStamp:(unsigned long long)a0 timeStamp:(double)a1;
- (void)resetCombineCountRequestSubTask:(id)a0;
- (unsigned long long)taskMap:(unsigned long long)a0;
- (double)readTimeStamp:(unsigned long long)a0;
- (unsigned long long)subTaskMap:(unsigned long long)a0;
- (id)__getSubTaskLogString:(unsigned long long)a0;
- (void)executeCleanTask:(id /* block */)a0 taskType:(unsigned long long)a1 timestamp:(double)a2 error:(id)a3;

@end
