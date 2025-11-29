@class NSArray;

@interface AWETeenPlayerSuperResolutionManager : NSObject

@property (nonatomic) BOOL enableSuperResolution;
@property (nonatomic) long long minFpsThreshold;
@property (nonatomic) long long minBatteryThreshold;
@property (nonatomic) long long percentFor540;
@property (retain, nonatomic) NSArray *enableDevices;
@property (nonatomic) long long superResolutionCount;
@property (nonatomic) long long unSuperResolutionCount;

+ (id)sharedInstance;

- (void)configSuperResolutionWithVC:(id)a0;
- (BOOL)isDashWithModel:(id)a0;
- (BOOL)isDynamicLinkWithVC:(id)a0;
- (BOOL)check540PWithVC:(id)a0;
- (BOOL)isAvailabeDevice:(id)a0;
- (BOOL)checkPercentWithVC:(id)a0;
- (BOOL)isLowBattery;
- (void).cxx_destruct;
- (id)init;
- (void)setupData;

@end
