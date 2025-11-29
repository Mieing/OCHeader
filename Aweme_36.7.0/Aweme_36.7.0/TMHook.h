@interface TMHook : NSObject

+ (id)stubbedClass;
+ (id)stubbedClassAPIs;
+ (id)stubbedInstanceAPIs;
+ (BOOL)entryEnable;
+ (BOOL)isEntryDefaultEnable;
+ (id)stubbedAPIs;
+ (id)stubbedCAPIs;
+ (void)reportRequestPermission:(id)a0 state:(long long)a1 uuid:(id)a2;
+ (BOOL)canReportRequestPermission;
+ (id)entryType;
+ (unsigned long long)storeType;
+ (void)preload;
+ (id)dataType;
+ (id)pipelineType;

- (BOOL)deferPreload;

@end
