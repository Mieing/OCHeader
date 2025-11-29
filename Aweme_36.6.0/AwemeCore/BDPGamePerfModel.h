@class NSString;

@interface BDPGamePerfModel : NSObject

@property (nonatomic) long long fpsRecordTimes;
@property (nonatomic) long long memRecordTimes;
@property (nonatomic) long long cpuRecordTimes;
@property (nonatomic) double gameStutter;
@property (nonatomic) double avgFps;
@property (nonatomic) double maxFps;
@property (nonatomic) double minFps;
@property (nonatomic) double avgGameJank;
@property (nonatomic) double avgDrawCall;
@property (nonatomic) long long isFirstTime;
@property (copy, nonatomic) NSString *blockType;
@property (nonatomic) long long lastBlockTimestamp;
@property (nonatomic) long long isAbnormalRender;
@property (nonatomic) long long isBlank;
@property (nonatomic) long long stayDuration;
@property (copy, nonatomic) NSString *sceneName;
@property (nonatomic) double avgCpu;
@property (nonatomic) double maxCpu;
@property (nonatomic) double minCpu;
@property (nonatomic) double avgMem;
@property (nonatomic) double maxMem;
@property (nonatomic) double minMem;
@property (nonatomic) double avgMemRate;
@property (nonatomic) double maxMemRate;
@property (nonatomic) long long thermalStatus;

- (void).cxx_destruct;

@end
