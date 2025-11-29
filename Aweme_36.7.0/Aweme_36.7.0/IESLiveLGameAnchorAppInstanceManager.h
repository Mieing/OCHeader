@class IESLiveLGameAnchorAppInstance, HTSEventContext, IESLiveLGameDuringLiveModel, IESLiveLGameDuringLiveApi, IESLiveLGameDuringLiveStarAlertController, IESLiveXPlayGameClearScreenContainerView, NSString;
@protocol IESHYControllerProtocol;

@interface IESLiveLGameAnchorAppInstanceManager : NSObject <IESLiveLGameDuringLiveStarAlertControllerDelegate, IESLiveXPlayGameScreenContainerViewDelegate, IESLiveLGameAnchorAppInstanceManager>

@property (retain, nonatomic) IESLiveLGameDuringLiveApi *networkApi;
@property (retain, nonatomic) IESLiveLGameDuringLiveModel *duringLiveModel;
@property (retain, nonatomic) IESLiveLGameAnchorAppInstance *gameInstance;
@property (copy, nonatomic) id /* block */ thresholdAgreementCallback;
@property (weak, nonatomic) IESLiveLGameDuringLiveStarAlertController *alertController;
@property (retain, nonatomic) IESLiveXPlayGameClearScreenContainerView *clearScreenContainer;
@property (weak, nonatomic) id<IESHYControllerProtocol> countVC;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ showInfoBlock;
@property (copy, nonatomic) id /* block */ openGameBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContainerViewFrame:(BOOL)a0;
- (void)sendMessageToGame:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (BOOL)isGameScreenCasting;
- (BOOL)hasGameRunning;
- (BOOL)isGameRunning:(id)a0;
- (void)cleanXPlayCache:(id)a0;
- (void)closeGameContainer:(id /* block */)a0;
- (void)removeCleanScreenContainer;
- (void)p_checkThresholdAndAgreement:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)p_createGameInstanceIfNeed:(id)a0 source:(id)a1;
- (void)forceCloseGame:(id)a0 completion:(id /* block */)a1;
- (void)closeGameContainer:(id)a0 completion:(id /* block */)a1;
- (void)showStarAlertView:(long long)a0 source:(id)a1 duringLiveModel:(id)a2;
- (void)showThresholdAlert:(id)a0;
- (void)showStarAlertView:(long long)a0 source:(id)a1 duringLiveModel:(id)a2 data:(id)a3;
- (void)trackStarTackAuthShow:(id)a0 duringLiveModel:(id)a1;
- (void)updateClearScreenUIWithState:(BOOL)a0;
- (void)callThresholdAgreementCallback:(id)a0;
- (void)trackStarTackAuthClick:(id)a0 gameSource:(id)a1 duringLiveModel:(id)a2;
- (id)starCommonTrackerParams:(id)a0;
- (id)gameCommonTrackerParams:(id)a0;
- (id)commonTrackerParams:(BOOL)a0 duringLiveModel:(id)a1;
- (void)trackWithName:(id)a0 params:(id)a1 isGame:(BOOL)a2 duringLiveModel:(id)a3;
- (void)trackGameDuration;
- (id)getStarSource:(id)a0;
- (void)onClickCancelButton:(id)a0;
- (void)onClickActionButton:(id)a0;
- (void)onClickLink:(id)a0;
- (void)willClickCheckButton:(id)a0 isCheck:(BOOL)a1;
- (void)switchCastScreenClicked:(BOOL)a0;
- (void)onTapManageButton;
- (void)onTapUserCount;
- (void)checkThresholdAndAgreement:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)bringGameToForeground:(id)a0 source:(id)a1;
- (void)trackGameStart;
- (void)trackGameEnd;
- (BOOL)isGameFromInteractivePanel;
- (BOOL)shouldShowClearContainer;
- (id)getClearContainerView;
- (void)forceCloseXPlayGame;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateModel:(id)a0;

@end
