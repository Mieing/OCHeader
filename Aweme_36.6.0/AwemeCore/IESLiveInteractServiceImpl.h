@class NSString;

@interface IESLiveInteractServiceImpl : NSObject <IESLiveRevenueInteractAction, IESLiveCommunityInteractAction, IESLiveSocialInteractAction, IESLiveGameInteractAction, IESLiveInteractService>

@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)currentInteractiveScene;
- (unsigned long long)currentRoleType;
- (void)startRevenueInteractWithScene:(unsigned long long)a0;
- (void)endRevenueInteractWithScene:(unsigned long long)a0;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)currentLayoutUIWillUpdateFrom:(id)a0 to:(id)a1;
- (void)currentLayoutUIDidUpdateFrom:(id)a0 to:(id)a1;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)currentFlattenSceneDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)currentRoomTypeForSlideMonitor:(long long)a0;
- (void)startCommunityInteractWithScene:(unsigned long long)a0;
- (void)endCommunityInteractWithScene:(unsigned long long)a0;
- (void)startGameInteractWithScene:(unsigned long long)a0;
- (void)endGameInteractWithScene:(unsigned long long)a0;
- (void)deactiveLastInteractiveScene;
- (void)activeCurrentInteractionScene;

@end
