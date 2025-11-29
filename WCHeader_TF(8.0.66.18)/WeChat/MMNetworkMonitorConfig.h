@class NSString;

@interface MMNetworkMonitorConfig : NSObject <PBCoding>

@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned int checkTime;
@property (nonatomic) unsigned int checkCount;
@property (nonatomic) unsigned int reportLimit;
@property (nonatomic) unsigned long long criticalUsage;
@property (nonatomic) unsigned long long voipUsage;
@property (nonatomic) unsigned long long liveUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_criticalUsage;
+ (void)PBArrayAdd_voipUsage;
+ (void)PBArrayAdd_liveUsage;
+ (void)initialize;

@end
