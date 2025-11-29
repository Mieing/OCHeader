@class IESLiveGameModuleGamePlayingRouterImpl, NSString;

@interface IESLiveGameModule : IESLiveModule <IESLiveGameModule>

@property (retain, nonatomic) IESLiveGameModuleGamePlayingRouterImpl *gamePlayingRouterImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)gameABManager;
- (id)nativeAppInterface;
- (id)gamePlayingInterface;
- (id)anchorInteractiveGameRouter;
- (id)gameSonicPanelInterface;
- (id)interactGameNotifyInterface;
- (unsigned long long)localLiveSceneType;
- (id)interractGameAnchorInterface;
- (id)interractGameAudienceInterface;
- (id)gameAudienceClarityDegradeInterface;
- (id)anchornteractiveGameActions;
- (id)anchorInteractiveGameInterface;
- (void).cxx_destruct;

@end
