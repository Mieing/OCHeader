@class NSTimer;

@interface IESLiveStreamMonitorFragment : IESLiveRoomComponent

@property (nonatomic) BOOL isStallBegin;
@property (retain, nonatomic) NSTimer *timer;

- (void)componentBindService;
- (void)playerDidStall;
- (void)playerDidResume;
- (void)invalidStallCheckTimer;
- (void)startStallCheckTimer;
- (BOOL)isPoorNetworkCondition;
- (void).cxx_destruct;
- (void)dealloc;

@end
