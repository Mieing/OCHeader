@class NSString;
@protocol AWEUGTimeMeterTaskProtocol;

@interface AWEUGFeedPendantActivityTaskStatusOutputer : NSObject <AWEUGStateOutputerProtocol>

@property (retain, nonatomic) id<AWEUGTimeMeterTaskProtocol> task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:(id)a0;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:(id)a0 withTotalTime:(id)a1;
- (void)trackFeedPendantResourceManagerLogWithMessage:(id)a0;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)taskDidStart;

@end
