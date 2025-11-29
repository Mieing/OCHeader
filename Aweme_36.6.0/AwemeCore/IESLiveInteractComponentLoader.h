@class NSString;

@interface IESLiveInteractComponentLoader : IESLiveInteractComponentLoaderBase <IESLiveSocialInteractPreLoadExAction>

@property (nonatomic) BOOL shouldDispatchEnterRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (void)didUpdatedGuestListWithActiveList:(id)a0;
- (void)didChangeLayoutFrom:(id)a0 toLayout:(id)a1;
- (void)startInteract;
- (void)didUpdateRoom:(id)a0;
- (void)orientationTransitionBegin:(long long)a0;
- (BOOL)canLeaveRoom;
- (void)endInteract;
- (void)loadAllComponents;
- (void)willChangeLayoutFrom:(id)a0 toLayout:(id)a1;
- (BOOL)canCloseInteract;
- (void)willLeaveRoom;
- (void)enterRoomLoadComponentsAfterPreLoad;
- (void)enterRoomStartInteractAfterPreLoad;
- (void)willPreLoadChangeLayoutFrom:(id)a0 toLayout:(id)a1;
- (void)didPreloadChangeLayoutFrom:(id)a0 toLayout:(id)a1;
- (void)preLoadStartInteract;

@end
