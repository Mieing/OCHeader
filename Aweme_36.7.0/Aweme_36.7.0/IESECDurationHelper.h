@protocol IESECPagePerformanceDelegate;

@interface IESECDurationHelper : NSObject

@property (nonatomic) double durationStart;
@property (nonatomic) double durationTotal;
@property (nonatomic) double startTime;
@property (nonatomic) double stage1Time;
@property (nonatomic) double stage2Time;
@property (nonatomic) BOOL hasRecordedPagePerformance;
@property (nonatomic) double leaveDetailPageStartTime;
@property (weak, nonatomic) id<IESECPagePerformanceDelegate> delegate;

- (void)resumeDurationRecord;
- (void)startDurationRecord;
- (void)startDurationRecordWithoutClearTotalDuration;
- (void)pauseDurationRecord;
- (void)recordLeaveDetailTime;
- (long long)getLeaveDetailDuration;
- (void)stage1;
- (void)stage2;
- (void)commitForPage:(id)a0;
- (id)stopAndGetstageTimesArray;
- (void).cxx_destruct;
- (void)begin;
- (double)totalDuration;

@end
