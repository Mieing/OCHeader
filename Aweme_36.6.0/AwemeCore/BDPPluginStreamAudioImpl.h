@class NSString;

@interface BDPPluginStreamAudioImpl : NSObject <BDPStreamAudioPlayerPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)bdp_streamAudioPlayer:(id)a0 stateDelegate:(id)a1;

@end
