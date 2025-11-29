@class NSString;

@interface BDPPluginVideoPlayerImpl : NSObject <BDPVideoPlayerPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)bdp_videoPlayerWithModel:(id)a0 uniqueID:(id)a1 stateDelegate:(id)a2;

@end
