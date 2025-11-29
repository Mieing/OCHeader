@class IESECGCDTimer, IESECLiveApi, IESECLiveContext;
@protocol IESECLiveLocalTimerRefreshDelegate;

@interface IESECLiveLocalTimerTaskUtils : NSObject

@property (nonatomic) long long totalTime;
@property (nonatomic) long long intervalStopTime;
@property (nonatomic) long long taskRecordTime;
@property (nonatomic) long long taskStatus;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) id<IESECLiveLocalTimerRefreshDelegate> delegate;

- (id)initWithLiveContext:(id)a0;
- (id)getLocalTaskInfo;
- (void)taskCompletedReportWithTaskInfo:(id)a0;
- (void)saveToLocalWithTaskInfo:(id)a0;
- (id)taskInfoKey;
- (void)setupTimerWithInterval;
- (long long)getRemainTime;
- (long long)getTotalTime;
- (long long)getTaskStatus;
- (void)updateTaskInfoWithDictionary:(id)a0;
- (BOOL)checkLocalTaskInfo;
- (BOOL)checkTimerExist;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)updateTimer;

@end
