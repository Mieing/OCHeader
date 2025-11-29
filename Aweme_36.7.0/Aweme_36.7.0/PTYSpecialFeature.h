@class NSString, NSNumber;

@interface PTYSpecialFeature : NSObject

@property (retain) NSString *deviceType;
@property (retain) NSString *osVersion;
@property (retain) NSString *resolution;
@property (retain) NSString *cpuType;
@property (retain) NSString *gpuType;
@property (retain) NSNumber *memoryTotal;
@property (retain) NSNumber *diskTotal;
@property (retain) NSNumber *diskAvailable;
@property unsigned long long cpuCore;

+ (id)launchtimekeyMap;
+ (id)sharedInstance;

- (id)getGpuInfo;
- (void)appDidEnterForground:(id)a0;
- (id)deviceFeatureForKey:(id)a0;
- (id)deviceFeatureForKeyAlign:(id)a0;
- (id)getResolutionString;
- (id)getCpuInfo;
- (void)loadLaunchtimeFeature;
- (void)updateRealtimeFeature:(id)a0;
- (void).cxx_destruct;
- (void)appDidEnterBackground:(id)a0;

@end
