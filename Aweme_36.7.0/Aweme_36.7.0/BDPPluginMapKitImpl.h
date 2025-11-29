@class NSString;

@interface BDPPluginMapKitImpl : NSObject <BDPMapPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)bdp_mapViewWithModel:(id)a0 componentID:(id)a1 delegate:(id)a2;

@end
