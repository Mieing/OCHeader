@class NSString;

@interface WAMemoryReleaseAction : WAReportBaseItem

@property (nonatomic) unsigned int triggerMemoryEvent;
@property (nonatomic) unsigned int foregroundWeAppCount;
@property (nonatomic) unsigned int backgroundWeAppCount;
@property (nonatomic) unsigned int foregroundSimulatedNativeCount;
@property (nonatomic) unsigned int foregroundGameCount;
@property (nonatomic) unsigned int backgroundGameCount;
@property (nonatomic) unsigned int releasePolicy;
@property (nonatomic) unsigned int releaseWeAppCount;
@property (nonatomic) unsigned int releaseSimulatedNativeCount;
@property (nonatomic) unsigned int releaseGameCount;
@property (nonatomic) unsigned int releasePageCount;
@property (nonatomic) unsigned int releasePreloadPageCount;
@property (nonatomic) unsigned int releasePreloadWeAppCount;
@property (nonatomic) unsigned int releasePreloadGameCount;
@property (nonatomic) unsigned long long deviceTotalMemoryInBytes;
@property (nonatomic) unsigned long long roundedDeviceTotalMemoryInBytes;
@property (nonatomic) unsigned long long footprintMemoryInBytes;
@property (nonatomic) unsigned int footprintMemoryPercent;
@property (nonatomic) unsigned long long freeMemoryInBytes;
@property (nonatomic) unsigned int freeMemoryPercent;
@property (nonatomic) unsigned int backgroundSimulatedNativeCount;
@property (copy, nonatomic) NSString *foregroundWeAppAppIDs;
@property (copy, nonatomic) NSString *backgroundWeAppAppIDs;
@property (copy, nonatomic) NSString *foregroundGameAppIDs;
@property (copy, nonatomic) NSString *backgroundGameAppIDs;
@property (copy, nonatomic) NSString *foregroundSimulatedNativeAppIDs;
@property (copy, nonatomic) NSString *backgroundSimulatedNativeAppIDs;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
