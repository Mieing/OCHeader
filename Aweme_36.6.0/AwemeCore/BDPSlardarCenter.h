@interface BDPSlardarCenter : NSObject

+ (void)monitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)bootstrapLaunch;
+ (void)monitorService:(id)a0 extra:(id)a1 uniqueId:(id)a2;
+ (void)monitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3 uniqueId:(id)a4;
+ (id)categoryCommonParamKeyList;
+ (id)sharedCenter;

- (void)monitorEventName:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)reportLogWithFetchStartTime:(double)a0 fetchEndTime:(double)a1 scene:(id)a2;
- (void)monitorTrackData:(id)a0 logTypeStr:(id)a1;

@end
