@class NSDictionary;

@interface IESLiveAnchorPFMemoryHandler : IESLiveAnchorPFBaseHandler

@property (nonatomic) long long currentState;
@property (nonatomic) long long appTotalMemory;
@property (nonatomic) long long appWarningMemory;
@property (copy, nonatomic) NSDictionary *memoryConfig;
@property (nonatomic) long long offset;
@property (copy, nonatomic) NSDictionary *memoryStates;
@property (nonatomic) double estimatedOOMRate;
@property (nonatomic) long long warningTimes;
@property (nonatomic) long long warningDuration;
@property (nonatomic) double lastWarningTime;

- (void)didStartLive;
- (id)providedPerfInfo;
- (void)processBasePerfInfo:(id)a0;
- (void)initializeParams;
- (void)trackMemoryInfo;
- (void)clearExtraMemoryResource;
- (long long)computeMemoryStateWithAppCurrentMemory:(long long)a0;
- (void)compareMemoryStateWithOldState:(long long)a0 newState:(long long)a1;
- (void)clearCameraMemoryResource;
- (void)clearEffectPlatformMemoryResource;
- (BOOL)isUsage:(double)a0 inRange:(id)a1;
- (void)memoryStateWillChangeFrom:(long long)a0 to:(long long)a1;
- (void)updateParamsWithOldState:(long long)a0 newState:(long long)a1;
- (long long)appCurrentMemory;
- (void)onAppDidReceiveMemoryWarning:(id)a0;
- (id)defaultMemoryConfig;
- (void)initializeAppTotalMemory;
- (void)initializeMemoryConfig;
- (void)initializeMemoryState;
- (long long)appCurrentTotalMemory;
- (void).cxx_destruct;
- (void)clearImageCache;
- (void)didLoad;
- (void)addObservers;
- (void)didUnload;

@end
