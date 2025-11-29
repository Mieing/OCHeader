@class NSString, NSMutableDictionary, NSDictionary;

@interface MemoryStatPluginConfig : NSObject <PBCoding>

@property (nonatomic) BOOL memoryStatManualEnabled;
@property (nonatomic) BOOL memoryStatDisable;
@property (retain, nonatomic) NSString *platform;
@property (nonatomic) int minGeneration;
@property (nonatomic) double disableTime;
@property (nonatomic) BOOL uploadAlways;
@property (nonatomic) BOOL uploadForFOOM;
@property (nonatomic) BOOL uploadForBOOM;
@property (nonatomic) BOOL fasterZoneEnabled;
@property (nonatomic) BOOL loggerZoneEnabled;
@property (nonatomic) BOOL webkitLoggerEnabled;
@property (nonatomic) BOOL webkitLoggerDumpStack;
@property (nonatomic) BOOL objectTraceEnabled;
@property (nonatomic) BOOL vmRegionsEnabled;
@property (nonatomic) int vmRegionsDumpInternal;
@property (nonatomic) BOOL allocationsEnabled;
@property (nonatomic) BOOL allocationsMemgraphEnabled;
@property (nonatomic) BOOL leaksEnabled;
@property (nonatomic) int leaksSampleFactor;
@property (nonatomic) BOOL mallocGuardEnabled;
@property (nonatomic) BOOL mallocGuardIgnoreDisableTime;
@property (nonatomic) int mallocGuardMaxTrunks;
@property (nonatomic) int mallocGuardCheckFeqs;
@property (nonatomic) int mallocGuardGuardSize;
@property (nonatomic) unsigned long long userType;
@property (nonatomic) unsigned long long maxUserType;
@property (retain, nonatomic) NSMutableDictionary *customInfo;
@property (retain, nonatomic) NSDictionary *observedCategories;
@property (retain, nonatomic) NSDictionary *memgraphCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_memoryStatManualEnabled;
+ (void)PBArrayAdd_disableTime;
+ (void)PBArrayAdd_uploadAlways;
+ (void)PBArrayAdd_memoryStatDisable;
+ (void)PBArrayAdd_platform;
+ (void)PBArrayAdd_minGeneration;
+ (void)PBArrayAdd_vmRegionsEnabled;
+ (void)PBArrayAdd_vmRegionsDumpInternal;
+ (void)PBArrayAdd_allocationsEnabled;
+ (void)PBArrayAdd_leaksEnabled;
+ (void)PBArrayAdd_leaksSampleFactor;
+ (void)PBArrayAdd_allocationsMemgraphEnabled;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_observedCategories;
+ (void)PBArrayAdd_mallocGuardEnabled;
+ (void)PBArrayAdd_mallocGuardMaxTrunks;
+ (void)PBArrayAdd_mallocGuardCheckFeqs;
+ (void)PBArrayAdd_userType;
+ (void)PBArrayAdd_maxUserType;
+ (void)PBArrayAdd_memgraphCategories;
+ (void)PBArrayAdd_fasterZoneEnabled;
+ (void)PBArrayAdd_loggerZoneEnabled;
+ (void)PBArrayAdd_uploadForFOOM;
+ (void)PBArrayAdd_uploadForBOOM;
+ (void)PBArrayAdd_mallocGuardIgnoreDisableTime;
+ (void)PBArrayAdd_mallocGuardGuardSize;
+ (void)PBArrayAdd_webkitLoggerEnabled;
+ (void)PBArrayAdd_webkitLoggerDumpStack;
+ (void)PBArrayAdd_objectTraceEnabled;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
