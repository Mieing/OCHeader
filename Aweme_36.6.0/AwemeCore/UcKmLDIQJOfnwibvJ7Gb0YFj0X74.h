@class NSArray;

@interface UcKmLDIQJOfnwibvJ7Gb0YFj0X74 : NSObject

@property (class, readonly, nonatomic) long long delaySecFromDtraitSinr;
@property (class, readonly, nonatomic) NSArray *disabledFeatures;
@property (class, readonly, nonatomic) UcKmLDIQJOfnwibvJ7Gb0YFj0X74 *sharedAccount;

@property BOOL isFirstReported;
@property BOOL isFinishedInit;
@property (nonatomic) double lastLoginTime;
@property (nonatomic) double sdkSetupTime;

+ (void)r6PC3dlhd8enga35Q1H4weM7T:(long long)a0 finished:(id /* block */)a1;
+ (void)HwDLUHiDaddDRJzDMmv52P4ddg:(id)a0 extra:(id)a1;
+ (void)r6PC3dlhd8enga3dQ1H4wdM7T;
+ (void)r6PC3dlhd8enga35Qdd1H4weM7T:(id)a0;
+ (void)registerFeatures;
+ (void)p_b_init;
+ (id)p_buildBadgerError:(long long)a0;
+ (void)trackBadger:(id)a0 error:(id)a1;
+ (void)getReportData:(id)a0 completion:(id /* block */)a1;
+ (unsigned long long)currentTimeStampUInt64;
+ (id)p_genChallenge:(id)a0 value:(long long)a1 challengeKey:(id *)a2;
+ (void)triggerReportDataCollect:(id)a0 completion:(id /* block */)a1;
+ (void)hxNEAsU5XqnvNz8dXi36XdNSfKpqcH:(id)a0 params:(id)a1;
+ (void)HwDLUHiDaDRJzDMmv52P4;
+ (void)CRH7q8f7PC7PTakpvX8faWbt6Er;
+ (void)r6PC3dlhc8enga35Q1H4wddeM7T;
+ (void)CRH7q8f7PCddPTakpvX8faWbt6Er:(id)a0;
+ (void)p_uploadReportData:(id)a0;
+ (void)p_appStateActiveRunCallback:(id /* block */)a0;
+ (BOOL)isReport:(id)a0;
+ (void)p_uploadReportDataToDtraitSinr:(id)a0;
+ (void)trackBadger:(id)a0 response:(id)a1 error:(id)a2;
+ (void)p_resetLastTriggerReportTime;
+ (BOOL)enablePreLoginReport;
+ (long long)currentTimeStamp;
+ (long long)rotationInterval;
+ (void)clean;

- (id)init;

@end
