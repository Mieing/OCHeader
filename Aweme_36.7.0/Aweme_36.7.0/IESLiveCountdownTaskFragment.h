@class NSTimer, NSDictionary, NSString;

@interface IESLiveCountdownTaskFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction>

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double finishTaskTime;
@property (nonatomic) long long leftTime;
@property (retain, nonatomic) NSDictionary *countdownParams;
@property (nonatomic) long long uniqueID;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) BOOL playerHasStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)streamPlayerDidReadyToRender;
- (void)startLiveIfNeed;
- (void)countdownTask;
- (void)trackTask;
- (void)becomeActive;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)enterBackground;
- (void)startTimer;
- (void)pauseTimer;
- (void)dealloc;
- (void)resumeTimer;
- (void)uploadTask;

@end
