@class DUXAlertDialog, NSString, RTVVoipFloatingBarView, RTVVoipSession, RTVVoipWarningHalfPanelService;
@protocol RTVVoipContextManagerInterface, RTVXRControllerInjector;

@interface RTVVoipWarningManager : NSObject <RTVXRControllerInterface, RTVVoipSessionObserver, RTVVoipObserver, RTVVoipWarningManager>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) RTVVoipFloatingBarView *floatingBar;
@property (retain, nonatomic) NSString *floatingBarShowedRoomId;
@property (nonatomic) BOOL isWarningPanelShowing;
@property (weak, nonatomic) DUXAlertDialog *onTheCalldialog;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) RTVVoipWarningHalfPanelService *panelService;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowOnOnTheCallAlertViewWithliveModuleService:(id)a0 formatLiveService:(id)a1 isInVoip:(BOOL)a2;
+ (id)getOnTheCallSceneStringWithliveModuleService:(id)a0 formatLiveService:(id)a1 isInVoip:(BOOL)a2;
+ (void)showOnTheCallAlertViewWithRoles:(long long)a0 scene:(id)a1 confirmHandler:(id /* block */)a2 refusehandler:(id /* block */)a3 trackParams:(id)a4;
+ (void)__trackEvent:(id)a0 params:(id)a1;
+ (BOOL)isNeedAlertWarningSessionWithModel:(id)a0;
+ (BOOL)isNeedWarningSessionWithErrorCode:(long long)a0;
+ (id)warningSessionStrategyWithModel:(id)a0;
+ (void)verifyRealNameWithVoipModel:(id)a0;
+ (void)sendVerifyNoticeWithUserId:(id)a0;
+ (id)mediaTypeWithModel:(id)a0;
+ (id)__conversationIDWithModel:(id)a0;
+ (BOOL)enableShowWarningWithVoipModel:(id)a0;
+ (void)p_trackOnTheCallAlertClickWithParams:(id)a0 role:(long long)a1 isConfirm:(BOOL)a2;
+ (void)p_trackOnTheCallAlertShowWithParams:(id)a0 role:(long long)a1;
+ (void)monitorPanelClickWithModel:(id)a0 actionType:(unsigned long long)a1 closeAction:(unsigned long long)a2 errorCode:(long long)a3 enterFrom:(id)a4;
+ (void)monitorPanelShowWithModel:(id)a0 actionType:(unsigned long long)a1 errorCode:(long long)a2 enterFrom:(id)a3;
+ (BOOL)isNeedWarningSessionWithModel:(id)a0;
+ (void)monitorWarningBannerWithVoipModel:(id)a0 action:(id)a1;
+ (void)monitorVerifyResponseWithModel:(id)a0 result:(id)a1 enterFrom:(id)a2;
+ (void)monitorBlockPanelShowWithModel:(id)a0 errorCode:(long long)a1 enterFrom:(id)a2;
+ (void)monitorVerifyShowWithModel:(id)a0 enterFrom:(id)a1;
+ (void)monitorDoubleConfirmShowWithModel:(id)a0 enterFrom:(id)a1;
+ (void)monitorWarningAlertWithModel:(id)a0 action:(id)a1;
+ (void)monitorBlockPanelClickWithModel:(id)a0 action:(id)a1 errorCode:(long long)a2 enterFrom:(id)a3;
+ (void)monitorVerifyClickWithModel:(id)a0 action:(id)a1 enterFrom:(id)a2;
+ (void)monitorDoubleConfirmClickWithModel:(id)a0 action:(id)a1 enterFrom:(id)a2;
+ (id)commonTraceDictionaryWithModel:(id)a0 enterFrom:(id)a1;
+ (id)roleTypeWithModel:(id)a0;
+ (id)chatTypeWithModel:(id)a0;

- (void)rtv_awakeFromControllerInjector;
- (void)voipService:(id)a0 voip:(id)a1 willSwitchNarrow:(BOOL)a2;
- (void)voipService:(id)a0 voip:(id)a1 didSwitchNarrow:(BOOL)a2;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)voipSession:(id)a0 newParticipantJoined:(BOOL)a1;
- (void)showAlertViewIfNeedWithVoipModel:(id)a0 confirmHandler:(id /* block */)a1 refusehandler:(id /* block */)a2;
- (void)showAlertViewIfNeedWithErrorCode:(long long)a0 voipModel:(id)a1 shownHandler:(id /* block */)a2 confirmHandler:(id /* block */)a3 refusehandler:(id /* block */)a4;
- (void)dismissAlertView;
- (BOOL)isWarningPanelShowing:(id)a0;
- (void)closeWarningViewIfNeeded;
- (void)showAlertViewIfNeedWithWarningStrategyKey:(id)a0 errorCode:(long long)a1 voipModel:(id)a2 shownHandler:(id /* block */)a3 confirmHandler:(id /* block */)a4 refusehandler:(id /* block */)a5;
- (void)hideFloatingBarIfNeed;
- (double)contentHeightWithContent:(id)a0;
- (void)showFloatingBarIfNeed;
- (void)dismissAlertViewIfNeed;
- (void).cxx_destruct;

@end
