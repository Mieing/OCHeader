@class UIView, IESLiveFunctionSquareViewController, IESLivePopupItem, HTSLiveItemDotInfo, NSArray, BDXBridgeEventSubscriber, NSString, IESLiveAnchorGameFuncPanelStore, HTSLiveExpandToolbarItem, IESLiveAnchorFunctionRegistry;
@protocol IESLiveBubbleGuide;

@interface IESLiveAnchorGameFuncPanelFragment : IESLiveRoomComponent <IESLiveAnchorGameFuncPanelReaction, IESLiveGuideDotBubbleHandler, IESLiveAnchorInteractiveGameRouter>

@property (retain, nonatomic) IESLiveAnchorGameFuncPanelStore *anchorInteractiveGameStore;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *gameCenterItem;
@property (retain, nonatomic) IESLiveFunctionSquareViewController *gameEntranceViewController;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tip;
@property (nonatomic) BOOL isGuideProcess;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) IESLiveAnchorFunctionRegistry *functionRegistry;
@property (retain, nonatomic) HTSLiveItemDotInfo *mainDot;
@property (retain, nonatomic) NSArray *subDots;
@property (retain, nonatomic) BDXBridgeEventSubscriber *panelDialogSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *panelCloseSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *panelRefreshSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *anchorInteractiveGameModels;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)mountDidFinishForLevel:(long long)a0;
- (id)currentSearchKeyword;
- (void)hidePanel;
- (void)showGameCenterItem:(BOOL)a0;
- (void)reloadInteractiveList;
- (void)refetchInteractiveList;
- (id)interactiveGameItemFromGameId:(long long)a0;
- (id)interactiveGameItemFromAppId:(id)a0;
- (id)interactiveGameItemFromInteractID:(unsigned long long)a0;
- (void)hideAnchorInteractiveGameView;
- (void)hideAnchorInteractiveGameViewWithCompletion:(id /* block */)a0;
- (void)showAnchorInteractiveGameView;
- (void)showAnchorInteractiveEntrance;
- (void)hideAnchorInteractiveEntrance;
- (void)startGameWithAnchorInteractiveGameItem:(id)a0 source:(id)a1;
- (void)startGameWithAnchorInteractiveGameItem:(id)a0 source:(id)a1 activityName:(id)a2;
- (void)startGameFromSchemaWithAppId:(id)a0 completion:(id /* block */)a1;
- (void)startGameWithAnchorInteractiveGameItem:(id)a0 source:(id)a1 activityName:(id)a2 sourceFrom:(id)a3;
- (void)updateReddotCount:(long long)a0 forGameItem:(long long)a1;
- (void)showBubbleTips:(id)a0;
- (void)updateGameEntranceItemAlpha:(double)a0;
- (void)reloadContentData;
- (BOOL)hasPreviewGameModel;
- (void)updateNeedShowInteractiveGameView:(BOOL)a0;
- (void)receiveItemDotInfo:(id)a0 subRedDots:(id)a1;
- (void)receiveItemBubbleInfo:(id)a0;
- (void)removeTipView;
- (void)pr_setupObserver;
- (void)pr_removeTipView;
- (void)removePanelDialogSubscriberIfNeed;
- (void)removePanelCloseSubscriberIfNeed;
- (void)removePanelRefreshSubscriberIfNeed;
- (void)pr_showTipOnInteractiveItem:(id)a0 withDuration:(double)a1 withGameItem:(id)a2;
- (void)pr_traceGamePopShow:(id)a0 gameItem:(id)a1;
- (BOOL)pr_isSupprotCurrentInteractiveEntrance:(id)a0;
- (void)setupPopup;
- (void)addSubscribeInteractPanelCloseEvent;
- (void)addSubscribeInteractPanelDialogEvent;
- (void)addSubscribeInteractPanelRefreshEvent;
- (void)showAnchorInteractiveGameEntranceWithItem:(id)a0;
- (void)pr_processGuideParamfromComponentContext;
- (BOOL)p_checkEnableShowGameCenter;
- (void)handleToolBarRedDotTapped;
- (void)didGameModelsUpdated:(BOOL)a0;
- (void).cxx_destruct;

@end
