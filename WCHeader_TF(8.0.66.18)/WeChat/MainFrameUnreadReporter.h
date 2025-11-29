@class NSObject;
@protocol OS_dispatch_queue;

@interface MainFrameUnreadReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void)tryReportSessionTimes;
- (void)reportJumpToNextSession:(id)a0 timestamp:(unsigned long long)a1;
- (long long)getReportSessionTypeFor:(id)a0;
- (void).cxx_destruct;

@end
