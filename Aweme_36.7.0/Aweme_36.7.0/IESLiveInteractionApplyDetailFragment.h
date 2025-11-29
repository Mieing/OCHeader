@class NSString, IESLiveInteractionApplyDetailPopupView, NSDate;

@interface IESLiveInteractionApplyDetailFragment : IESLiveRoomComponent <IESLiveSocialInteractAction, IESLiveFastMatchActions, IESLiveInteractionApplyDetailRouter>

@property (nonatomic) unsigned long long currentScene;
@property (retain, nonatomic) NSDate *lastApplyTime;
@property (nonatomic) BOOL fastMatchTopRightEntryEmphasized;
@property (copy, nonatomic) NSString *lastApplyReason;
@property (weak, nonatomic) IESLiveInteractionApplyDetailPopupView *applyDetailPopupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;
- (BOOL)enabledForScene:(unsigned long long)a0;
- (void)showApplyDetailPanelUnderInteractiveScene:(unsigned long long)a0 waitingResponse:(id)a1 interactionAPI:(id)a2 cancelApplyAction:(id /* block */)a3 recoveryShowCallback:(id /* block */)a4;
- (void)updateApplyReason:(id)a0;
- (void)didUpdateFastMatchStatus:(unsigned long long)a0;
- (double)p_applyViewWidth;
- (long long)p_fastMatchEntryStyleUnderScene:(unsigned long long)a0;
- (void)p_trackEvent:(id)a0 extraParams:(id)a1;
- (BOOL)p_isValidScene:(unsigned long long)a0;
- (void)p_cleanApplyContext;
- (id)p_guestConnectionTypeForScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
