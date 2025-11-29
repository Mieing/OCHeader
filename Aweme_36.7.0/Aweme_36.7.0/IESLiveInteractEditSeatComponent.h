@class NSArray, HTSLiveApi, NSString;
@protocol IESLiveSocialInteractiveRouter;

@interface IESLiveInteractEditSeatComponent : IESLiveInteractComponentBase <IESLiveInteractEditSeatRouter, IESLiveInteractionLinkerServiceAction, IESLiveMultiInteractUserServiceDelegate, IESLiveInteractiveLinkServiceDelegate, IESLiveSocialInteractAction>

@property (copy, nonatomic) NSArray *allSeats;
@property (copy, nonatomic) NSArray *lockedSeats;
@property (retain, nonatomic) HTSLiveApi *API;
@property (weak, nonatomic) id<IESLiveSocialInteractiveRouter> socialRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)currentLayoutUIDidUpdateFrom:(id)a0 to:(id)a1;
- (void)interactionLinkerService:(id)a0 didLoadUserListData:(id)a1 isWrds:(BOOL)a2;
- (void)interactionLinkerService:(id)a0 onReceivedMicVerify:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivedMicListChange:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivePositionLock:(id)a1;
- (void)componentBindContext;
- (BOOL)currentUserCanEditSeatName;
- (BOOL)currentUserCanLockSeat;
- (id)seatAtPosition:(long long)a0;
- (id)seatNameAtPostion:(long long)a0;
- (unsigned long long)countOfNamedSeats;
- (BOOL)isSeatLockedAtPosition:(long long)a0;
- (void)lockSeatAtPosition:(long long)a0 source:(long long)a1 completion:(id /* block */)a2;
- (void)unlockSeatAtPosition:(long long)a0 source:(long long)a1 completion:(id /* block */)a2;
- (void)changeSeatName:(id)a0 atPosition:(long long)a1 userModelAtSeat:(id)a2 completion:(id /* block */)a3;
- (void)changeMySeatToPosition:(long long)a0 completion:(id /* block */)a1;
- (id)createPanelTopRightItemAtSeatPosition:(long long)a0;
- (id)createEditSeatPanelViewModelOfLinkMicUser:(id)a0;
- (void)popUpEditSeatPanelAtPosition:(long long)a0 userModelAtSeat:(id)a1;
- (void)locallyUpdateSeatAtPosition:(long long)a0 withVerifyStatus:(int)a1;
- (BOOL)isMainSlotSeatNameWithPosition:(long long)a0;
- (void).cxx_destruct;

@end
