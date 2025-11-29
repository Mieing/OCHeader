@interface ACCEditHealthPunishFlowComponent : ACCFeatureComponent

@property (nonatomic) BOOL isViewFirstAppear;

- (void)componentDidAppear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)correctionThirdPartyPublishPunish;
- (void)checkEditPublishHealthPunishIfNeed;
- (BOOL)viewControllersStackContainShootOrAlbum;
- (BOOL)containShootOrAlbumViewController:(id)a0;
- (BOOL)containShoot:(id)a0;
- (BOOL)containAlbum:(id)a0;
- (BOOL)containViewController:(id)a0 vcClass:(Class)a1;
- (unsigned long long)viewControllersStackSearchResult;

@end
