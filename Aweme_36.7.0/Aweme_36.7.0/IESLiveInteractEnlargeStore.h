@class HTSEventContext, HTSLiveInteractiveAPI;
@protocol IESLiveRoomService, IESLiveInteractionLinkerService;

@interface IESLiveInteractEnlargeStore : NSObject

@property (retain, nonatomic) HTSLiveInteractiveAPI *linkmicAPI;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;

- (id)currentUserType;
- (void)updateEnlargeFullSreenSettingIsOpen:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateAudioEnlargeLayoutSetting:(BOOL)a0 isTempOperation:(BOOL)a1 completion:(id /* block */)a2;
- (id)currentLargeUserType;
- (id)initWithRoom:(id)a0 scene:(unsigned long long)a1 trackContext:(id)a2 diContext:(id)a3;
- (void)trackEnlargeGuestReply:(id)a0 guestID:(id)a1;
- (void)trackEnlargeUserActionWithIsEnlarge:(BOOL)a0 guestID:(id)a1;
- (void)p_trackSendInviteForGuestId:(id)a0 enlargeType:(id)a1;
- (void)enlargeGuestInvite:(id)a0 isEnlarge:(BOOL)a1 toPos:(id)a2 completion:(id /* block */)a3;
- (void)p_trackSendCancelForGuestId:(id)a0 isCancelAll:(BOOL)a1;
- (void)p_trackEnlargeGuestInvite:(BOOL)a0 guestID:(id)a1;
- (void)tryToCloseDoubleCWithKickUser:(id)a0 completion:(id /* block */)a1;
- (void)trackGuestOverEnlarge:(long long)a0 isAnchorEnlarge:(BOOL)a1 isDouble:(BOOL)a2 extra:(id)a3;
- (void)trackGuestStartEnlargeIsAnchorEnlarge:(BOOL)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
