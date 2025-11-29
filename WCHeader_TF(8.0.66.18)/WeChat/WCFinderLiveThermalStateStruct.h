@class NSString, MMBatteryInfo;

@interface WCFinderLiveThermalStateStruct : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned int thermalState;
@property (nonatomic) unsigned int isLowPowerModeEnabled;
@property (nonatomic) unsigned int currentLiveScene;
@property (copy, nonatomic) NSString *finderNickname;
@property (retain, nonatomic) MMBatteryInfo *batteryInfo;
@property (nonatomic) float deviceGPUUtilization;
@property (nonatomic) float deviceAverageGPUUtilization;
@property (copy, nonatomic) NSString *networkType;
@property (nonatomic) float deviceCPUUsage;
@property (nonatomic) float appCPUUsage;
@property (nonatomic) unsigned long long appFootprintMemory;
@property (nonatomic) unsigned long long appAverageFootprintMemory;
@property (nonatomic) double appFootprintMemoryRisingDuration;
@property (nonatomic) long long appFootprintMemoryRisingLength;
@property (nonatomic) long long overheatingEvent;
@property (nonatomic) double overheatingDuration;
@property (nonatomic) long long overheatingTorchStatus;
@property (nonatomic) long long energyMode;
@property (copy, nonatomic) NSString *energyRuleID;
@property (nonatomic) unsigned int backgroundWeAppTaskCount;
@property (nonatomic) unsigned int downloadingTaskCount;
@property (nonatomic) unsigned int networkQuality;
@property (nonatomic) unsigned int isWeakNetFromMars;
@property (nonatomic) unsigned int marsAvgSpeed;

- (id)toReport;
- (void).cxx_destruct;

@end
