@class NSString;

@interface AWEPluginRevisitCustomImpl : NSObject <BDPRevisitPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (BOOL)showSideBarRevisitGuideWithSchemaURL:(id)a0;
+ (BOOL)gameShowSideBarRevisitGuideWithSchemaURL:(id)a0;
+ (BOOL)canShowRevisitEffectWithSchema:(id)a0;

- (BOOL)bdp_showSideBarRevisitGuide:(id)a0 schema:(id)a1;
- (BOOL)isShowSidebarRevisitGuideSceneWithSchema:(id)a0;
- (void)bdp_showSidebarBubbleWithModel:(id)a0 completion:(id /* block */)a1;
- (long long)bdp_newSidebarRevisitGuideAnimationTypeForSchema:(id)a0;
- (id)bdp_getHomePageLeftSideBarInfo;
- (void)bdp_showHPSideBarEntranceInteractiveAnimationWithBusinessSubId:(id)a0 completion:(id /* block */)a1;

@end
