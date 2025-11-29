@class NSTimer, NSString;

@interface BDPPlayableGameLoadInstance : BDPNativeGameLoadInstance <BDPContainerLifeCycleMessage>

@property (retain, nonatomic) NSTimer *playTimer;
@property (nonatomic) BOOL hasPlayCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (long long)type;

- (void)applicationEnterBackGroundWithUniqueID:(id)a0;
- (void)applicationEnterForeGroundWithUniqueID:(id)a0;
- (void)becomeReadyStatus;
- (id)initWithBootManager:(id)a0;
- (void)startPlayTimer;
- (void)checkPerformanceMode:(id)a0;
- (void)invalidatePlayTimer;
- (void)startPlayTimerIfNeed;
- (void)handlePlayTimerCountdown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopPlayTimer;

@end
