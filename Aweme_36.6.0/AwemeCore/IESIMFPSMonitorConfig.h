@class NSSet;

@interface IESIMFPSMonitorConfig : NSObject

@property (nonatomic) BOOL monitorEnable;
@property (nonatomic) long long samplingRate;
@property (nonatomic) long long dropFrameThread;
@property (nonatomic) long long actionDropFrameThread;
@property (nonatomic) long long hitchTimeThread;
@property (nonatomic) double hitchDurationThreadInMS;
@property (nonatomic) double eventMaxDurationInMS;
@property (nonatomic) BOOL enableEnvReport;
@property (nonatomic) BOOL enableActionReport;
@property (nonatomic) BOOL enableEventReport;
@property (nonatomic) BOOL enableBootTaskReport;
@property (nonatomic) double maxDurationFromColdLaunchInSec;
@property (nonatomic) BOOL enableLog;
@property (retain, nonatomic) NSSet *disableEvents;
@property (retain, nonatomic) NSSet *disableActions;

+ (id)sharedConfig;

- (void).cxx_destruct;
- (id)init;

@end
