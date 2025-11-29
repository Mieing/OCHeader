@class NSString;

@interface BDPSlardarMonitorPluginImpl : NSObject <BDPMonitorPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)setCustomContextValue:(id)a0 forKey:(id)a1;
- (void)setCustomFilterValue:(id)a0 forKey:(id)a1;
- (void)removeCustomFilterKey:(id)a0;
- (void)enterForeground:(id)a0;
- (void)removeCustomContextKey:(id)a0;
- (void)reportEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)setupObserver;
- (double)systemUsedMemoryBytes;
- (double)availableMemoryBytes;
- (void)reportData:(id)a0 logType:(id)a1;
- (void)reportLogStartAt:(double)a0 endAt:(double)a1 scene:(id)a2;
- (void)exitForeground:(id)a0;
- (id)init;
- (void)dealloc;

@end
