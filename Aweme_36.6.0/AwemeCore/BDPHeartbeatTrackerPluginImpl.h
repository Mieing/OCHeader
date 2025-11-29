@class NSString;

@interface BDPHeartbeatTrackerPluginImpl : NSObject <BDPHeartbeatTrackerPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)createHeatbeatTrackerWithAppId:(id)a0 config:(id)a1;

@end
