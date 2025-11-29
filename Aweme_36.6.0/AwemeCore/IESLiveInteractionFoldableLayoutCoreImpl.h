@class NSString, HTSLiveInteractiveAPI, IESLiveInteractionLayout;
@protocol IESLiveInteractUserModel, IESLiveRoomService, IESLiveInteractionLinkerService;

@interface IESLiveInteractionFoldableLayoutCoreImpl : NSObject <IESLiveDataSyncDelegate, IESLiveSocialInteractPreLoadExAction, IESLiveInteractionLinkerServiceAction, IESLiveInteractionFoldableLayoutCore>

@property (retain, nonatomic) IESLiveInteractionLayout *switchingLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *anchorSyncLayout;
@property (retain, nonatomic) IESLiveInteractionLayout *guestOperationLayout;
@property (retain, nonatomic) HTSLiveInteractiveAPI *api;
@property (retain, nonatomic) id<IESLiveInteractUserModel> visibleGuest;
@property (nonatomic) double startShowTime;
@property (copy, nonatomic) id /* block */ delayCheckTask;
@property (weak, nonatomic) id<IESLiveRoomService> roomService;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didSetAttachingDIContext;
- (void)switchLayout:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)currentLayoutUIDidUpdateFrom:(id)a0 to:(id)a1;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didUpdatedGuestListWithActiveList:(id)a0;
- (void)interactionLinkerService:(id)a0 interactListDidChangeFrom:(id)a1 to:(id)a2;
- (void)interactionLinkerServiceInteractWillEnd:(id)a0;
- (void)interactionLinkerServiceSomeoneTalkingStateDidChanged:(id)a0;
- (void)handleUpdateCurrentLayoutTo:(id)a0 completion:(id /* block */)a1;
- (id)calculateHighestPriorityGuest:(id)a0;
- (void)removeDelayCheckTask;
- (void)syncLinkedGuestsVisibleState;
- (id)provideVisibleSEIGrids:(id)a0;
- (void)pinnedLinkedSelfAlwaysVisible;
- (void)syncToAnchorWithLayout:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)handleSyncWrdsData:(id)a0;
- (void).cxx_destruct;
- (id)currentLayout;

@end
