@class NSDictionary, IESLiveGCDTimer;

@interface IESLiveAnchorPFTemperatureHandler : IESLiveAnchorPFBaseHandler

@property (nonatomic) long long currentState;
@property (copy, nonatomic) NSDictionary *temperatureConfig;
@property (nonatomic) long long seriousHotTime;
@property (nonatomic) long long criticalHotTime;
@property (retain, nonatomic) IESLiveGCDTimer *seriousTimer;
@property (retain, nonatomic) IESLiveGCDTimer *criticalTimer;
@property (nonatomic) double lastChangedTimeStamp;
@property (nonatomic) long long seriousTimes;
@property (nonatomic) long long criticalTimes;
@property (nonatomic) long long seriousDuration;
@property (nonatomic) long long criticalDuration;

- (id)providedPerfInfo;
- (void)initializeParams;
- (void)clearSeriousTimer;
- (void)clearCriticalTimer;
- (void)trackTemperatureInfo;
- (long long)computeTemperatureState;
- (void)temperatureStateWillChangeFrom:(long long)a0 to:(long long)a1;
- (void)updateRecordInfoWithOldState:(long long)a0 newState:(long long)a1;
- (void)compareTemperatureStateWithOldState:(long long)a0 newState:(long long)a1;
- (void)thermalStateDidChanged:(id)a0;
- (id)defaultTemperatureConfig;
- (void)initializeTemperatureState;
- (void).cxx_destruct;
- (void)didLoad;
- (void)addObservers;
- (void)didUnload;

@end
