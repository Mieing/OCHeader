@class NSString, NSDictionary;
@protocol AWEUGTimeMeterTaskProtocol;

@interface AWEUGTributeTask : NSObject

@property (nonatomic) BOOL isReporting;
@property (retain, nonatomic) id<AWEUGTimeMeterTaskProtocol> task;
@property (nonatomic) double reportInterval;
@property (nonatomic) long long reportedProgress;
@property (nonatomic) long long ackedProgress;
@property (copy, nonatomic) NSString *timerTaskIdentifier;
@property (copy, nonatomic) NSString *crossToken;
@property (copy, nonatomic) NSDictionary *taskConfig;

- (void)taskReport;
- (id)initWithCrossToken:(id)a0 timerTaskIdentifier:(id)a1 taskConfig:(id)a2 reportInterval:(double)a3;
- (void)taskProgressUpdated:(double)a0;
- (void).cxx_destruct;

@end
