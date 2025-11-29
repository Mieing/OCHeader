@class NSString, RTVVoipSession;
@protocol RTVXRParticipantManagementControllerDelegate, RTVXRControllerInjector, RTVVoipParticipatorManagerInterface, RTVXRRoomSessionControllerInterface;

@interface RTVVoipInviteController : NSObject <RTVXRParticipantManagementController>

@property (readonly, nonatomic) id<RTVVoipParticipatorManagerInterface> participatorManager;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (nonatomic, getter=isShowing) BOOL showing;
@property (weak, nonatomic) id<RTVXRParticipantManagementControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (id)showInviteParticipantPanelWithAutoSelectOnlineUsers:(BOOL)a0;
- (id)dismissInviteParticipantPanel;
- (id)inviteParticipantWithModel:(id)a0;
- (id)__isControlActionEnable:(long long)a0;
- (void)__handleControlActionDisable:(long long)a0;
- (id)__checkCanInvite;
- (void).cxx_destruct;

@end
