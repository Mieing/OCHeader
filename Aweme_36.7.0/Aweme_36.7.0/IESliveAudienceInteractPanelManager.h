@class NSString, NSArray, IESLiveAudienceInteractiveSearchPanel, IESLiveAudienceInteractiveSettingPanel, IESLiveInteractivePlayModeSelectPanel, IESLiveAudienceInteractiveRootPanelViewModel, IESLiveAudienceInteractiveRootPanel, NSNumber, HTSLivePopupNavigationController;
@protocol IESLiveInteractionLinkerService;

@interface IESliveAudienceInteractPanelManager : NSObject <IESLiveAudienceInteractPanelRouter>

@property (nonatomic) long long currentRootPanel;
@property (retain, nonatomic) HTSLivePopupNavigationController *panelNav;
@property (retain, nonatomic) IESLiveAudienceInteractiveRootPanel *invitePanel;
@property (retain, nonatomic) IESLiveAudienceInteractiveRootPanelViewModel *invitePanelViewModel;
@property (retain, nonatomic) IESLiveAudienceInteractiveSettingPanel *settingPanel;
@property (retain, nonatomic) IESLiveInteractivePlayModeSelectPanel *playModePanel;
@property (weak, nonatomic) IESLiveAudienceInteractiveSearchPanel *searchPanel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentNavFrame;
@property (retain, nonatomic) NSArray *readedApplications;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (readonly, nonatomic) NSNumber *fromSeatPositionOfCurrentPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)openInvitePanel:(id)a0 viewModel:(id)a1;
- (void)openSettingView:(id)a0;
- (void)openChoosePanel:(id)a0;
- (void)openPlayModePanel:(id)a0;
- (void)openSearchPanel:(id)a0;
- (void)openSetAdMinAuthorityVc:(id)a0;
- (id)createLinkmicResultPanelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1;
- (long long)updateUnReadTipsCountWithWaitingList:(id)a0;
- (void)dismissNavPanel;
- (BOOL)needLandScapeAdpterWithoutPad;
- (BOOL)needLandScapeAdpter;
- (double)interactLandScapeRightPanelWidth;
- (double)interactLandScapeBottomPanelWidth;
- (void)pushPanel:(id)a0;
- (id /* block */)addBlock:(id /* block */)a0 withBlock:(id /* block */)a1;
- (id)getPopUpItemWith:(id)a0;
- (void)pop;
- (void).cxx_destruct;
- (void)dealloc;

@end
