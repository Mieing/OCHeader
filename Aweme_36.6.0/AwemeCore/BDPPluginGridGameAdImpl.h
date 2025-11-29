@class NSString;

@interface BDPPluginGridGameAdImpl : NSObject <BDPGridGameAdPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)bdp_requestGridGameModelsWithUniqueID:(id)a0 adUnitId:(id)a1 count:(int)a2 getJumpingGamesScene:(long long)a3 completion:(id /* block */)a4;

@end
