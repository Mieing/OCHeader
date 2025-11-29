@class NSString;

@interface BDPPluginLivePlayerImpl : NSObject <BDPLivePlayerPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)bdp_livePlayerWithModel:(id)a0 uniqueID:(id)a1 stateDelegate:(id)a2;
- (id)bdp_livePlayerWithModel:(id)a0 stateDelegate:(id)a1;

@end
