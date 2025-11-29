@class NSString, MMFinderLiveTaskId, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MMFinderLiveStatsReporterDelegate;

@interface MMFinderLiveStatsReporter : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) long long state;
@property (nonatomic) double lastReportTime;
@property (nonatomic) BOOL alreadyExitedLive;
@property (retain, nonatomic) NSMutableArray *stashedItemArray;
@property (weak, nonatomic) id<MMFinderLiveStatsReporterDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;

- (id)initWithTaskId:(id)a0 sessionId:(id)a1;
- (void)appendReportItemArray:(id)a0;
- (void)onJoinLiveFinish:(BOOL)a0;
- (void)onExitLiveRoom;
- (void)flush;
- (void)becomeActived;
- (void)becomeIdle;
- (void)triggerReportAction;
- (id)popAndClearStashedItemArray;
- (void)notifyDelegateShouldReleaseReporter;
- (void).cxx_destruct;

@end
