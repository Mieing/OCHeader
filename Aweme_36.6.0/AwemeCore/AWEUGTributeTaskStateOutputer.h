@class NSString;
@protocol AWEUGTimeMeterTaskProtocol, AWEUGTributeTimingManagerProtocol;

@interface AWEUGTributeTaskStateOutputer : NSObject <AWEUGStateOutputerProtocol>

@property (weak, nonatomic) id<AWEUGTimeMeterTaskProtocol> task;
@property (weak, nonatomic) id<AWEUGTributeTimingManagerProtocol> tributeTimingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUGKitModuleDOUYINAdapterClass;

- (void)taskDidFinishTask;
- (void)taskDidPauseForReason:(id)a0;
- (void)taskWillStartTiming;
- (void)taskDidStop;
- (void)taskUpdateProgress:(id)a0 withTotalTime:(id)a1;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (void)trackLogWithMessage:(id)a0;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (void)taskDidStart;

@end
