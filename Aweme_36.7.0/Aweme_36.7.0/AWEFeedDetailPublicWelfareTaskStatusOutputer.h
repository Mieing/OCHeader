@class NSString;

@interface AWEFeedDetailPublicWelfareTaskStatusOutputer : NSObject <AWEUGStateOutputerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackLogWithEvent:(id)a0;
- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:(id)a0;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:(id)a0 withTotalTime:(id)a1;
- (void)taskDidFinishReportWithModel:(id)a0;
- (id)initWithTask:(id)a0;
- (void)dealloc;
- (void)taskDidStart;

@end
