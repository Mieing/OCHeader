@class NSString;
@protocol RTVXRParticipantManagementController;

@interface AWEVoipViewController : RTVVoipViewController <AWEDigitalWellbeingMessage, RTVXRParticipantManagementControllerDelegate>

@property (readonly, nonatomic) id<RTVXRParticipantManagementController> participantController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastNarrowViewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)rtv_awakeFromControllerInjector;
- (void)viewWillAppearWithIMStayTimeTracker;
- (void)viewWillDisappearWithIMStayTimeTracker;
- (id)imStayTimelabel;
- (id)imStaytimeKey;
- (void)updateNarrowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__handleActionButtonWithType:(long long)a0;
- (void)__handleActionButtonInviteWithAutoSelectOnlineUsers:(BOOL)a0;
- (void)__inviteParticipants;
- (void)__directInviteParticipants:(id)a0;
- (void)participantManagementController:(id)a0 didInviteUserIDs:(id)a1 groupIDs:(id)a2;
- (void)participantManagementControllerDidCancelInvite:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetNarrowRect;
- (BOOL)__needSwitchToFullScreenWhenOnTheCall;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
