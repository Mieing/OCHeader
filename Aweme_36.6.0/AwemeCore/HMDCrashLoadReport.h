@interface HMDCrashLoadReport : NSObject

@property (nonatomic, getter=isLastTimeCrash) BOOL lastTimeCrash;
@property (nonatomic, getter=isLastTimeLoadCrash) BOOL lastTimeLoadCrash;
@property (nonatomic) double launchDuration;
@property (nonatomic) unsigned long long moveTrackerProcessFailedCount;
@property (nonatomic) unsigned long long dropCrashIfProcessFailedCount;

+ (id)report;

@end
