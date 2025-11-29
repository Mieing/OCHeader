@class NSString;
@protocol IESLiveRevenueInteractProvider, IESLiveRevenueInteractConnectingViewModel, IESHYControllerProtocol;

@interface IESLiveRevenueInteractConnectingPanelManager : NSObject <IESLiveRevenueInteractPlayStateAction, IESLiveRevenueInteractInnerAction, IESLiveKTVChorusActions>

@property (retain, nonatomic) id<IESLiveRevenueInteractConnectingViewModel> viewModel;
@property (weak, nonatomic) id<IESHYControllerProtocol> playPanel;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindAction;
- (void)onInteractionEnd:(unsigned long long)a0;
- (void)didRevenueInteractPlayEnd;
- (void)didChangeStateFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)onClickRevenueInteractBattleItem;
- (void)handleBattlePanelAction:(long long)a0 extraParams:(id)a1;
- (void)handleBattleChorusAction:(long long)a0;
- (void)openPlayPanel;
- (void)didChorusStarted:(id)a0;
- (void)didChorusEnd:(id)a0;
- (void)notifyPlayPanelWithType:(id)a0 data:(id)a1;
- (void)startAutoMatchWithLynxData:(id)a0;
- (void)openInvitePanel;
- (void)openTeamPanelWithLynxData:(id)a0;
- (void)openSettingPanel;
- (void)closeInteract;
- (void)openFeedbackPanel;
- (void)openVoteEditPanel;
- (void)openCloseInteractPanel;
- (id)voteSettingJson;
- (void)notifyLynxPKStatus:(long long)a0;
- (void)dismissPlayPanel;
- (void)notifyLynxChorusStatus:(long long)a0;
- (void).cxx_destruct;

@end
