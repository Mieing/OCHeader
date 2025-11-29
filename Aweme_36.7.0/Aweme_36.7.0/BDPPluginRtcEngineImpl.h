@class NSString;

@interface BDPPluginRtcEngineImpl : NSObject <BDPRtcEnginePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)bdp_rtcEngineWithAppId:(id)a0 delegate:(id)a1 uniqueID:(id)a2;
- (id)bdp_rtcEngineWithAppId:(id)a0 delegate:(id)a1;

@end
