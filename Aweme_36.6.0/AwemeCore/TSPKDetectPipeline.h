@interface TSPKDetectPipeline : NSObject

+ (id)stubbedClass;
+ (id)handleAPIAccess:(id)a0 className:(id)a1;
+ (id)stubbedClassAPIs;
+ (id)stubbedInstanceAPIs;
+ (id)handleAPIAccess:(id)a0;
+ (BOOL)entryEnable;
+ (BOOL)isEntryDefaultEnable;
+ (id)stubbedAPIs;
+ (id)stubbedCAPIs;
+ (id)handleAPIAccess:(id)a0 className:(id)a1 params:(id)a2;
+ (id)handleAPIAccess:(id)a0 className:(id)a1 params:(id)a2 customHandleBlock:(id /* block */)a3;
+ (void)reportTimonPipelineAPMWithName:(id)a0 timeCost:(double)a1 result:(id)a2;
+ (void)forwardCallInfoWithMethod:(id)a0 apiType:(id)a1 apiUsageType:(unsigned long long)a2 hashTag:(id)a3 beforeOrAfter:(BOOL)a4 isCustomApi:(BOOL)a5;
+ (void)reportRequestPermission:(id)a0 state:(long long)a1 uuid:(id)a2;
+ (BOOL)tspk_canReportRequestPermission;
+ (long long)downgradeApiStartId;
+ (id)handleAPIAccess:(id)a0 AspectInfo:(id)a1;
+ (void)forwardCallInfoWithMethod:(id)a0 apiUsageType:(unsigned long long)a1 hashTag:(id)a2 beforeOrAfter:(BOOL)a3;
+ (void)forwardCallInfoWithMethod:(id)a0 apiType:(id)a1 apiUsageType:(unsigned long long)a2 isCustomApi:(BOOL)a3;
+ (void)forwardBizCallInfoWithMethod:(id)a0 apiType:(id)a1 dataType:(id)a2 apiUsageType:(unsigned long long)a3 bizLine:(id)a4;
+ (void)reportRequestPermission:(id)a0 state:(long long)a1;
+ (id)entryType;
+ (unsigned long long)storeType;
+ (void)preload;
+ (id)dataType;
+ (id)authorizationStatus;
+ (id)pipelineType;

- (id)entryModel;
- (BOOL)deferPreload;

@end
