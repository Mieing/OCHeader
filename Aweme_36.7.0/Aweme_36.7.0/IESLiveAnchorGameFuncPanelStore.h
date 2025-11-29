@class HTSEventContext, NSArray, NSDictionary, IESLiveComponentContext, NSString, IESLiveAnchorGameFuncPanelTipStrategy;
@protocol IESLiveAnchorGameFuncPanelReaction, IESLiveAnchorGameFuncPanelViewStore, IESLiveAnchorGameFuncPanelSceneMonitor, IESLiveAnchorGameFuncPanelGameingStateRouter, IESLiveAnchorGameFuncPanelLauncher, IESLiveAnchorGameFuncPanelFilter, IESLiveAnchorGameFuncPanelReddotModifier;

@interface IESLiveAnchorGameFuncPanelStore : NSObject <IESLiveAnchorInteractiveGameActions, IESLiveAnchorGameFuncPanelSceneNotify>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL isNeedShowInteractiveGameView;
@property (retain, nonatomic) IESLiveAnchorGameFuncPanelTipStrategy *tipStrategy;
@property (nonatomic) double switchToChatRoomSceneTimeInterval;
@property (retain, nonatomic) id<IESLiveAnchorGameFuncPanelLauncher> gameLauncher;
@property (retain, nonatomic) id<IESLiveAnchorGameFuncPanelViewStore> gameStore;
@property (retain, nonatomic) id<IESLiveAnchorGameFuncPanelSceneMonitor> sceneMonitor;
@property (retain, nonatomic) id<IESLiveAnchorGameFuncPanelFilter> gameFilter;
@property (retain, nonatomic) id<IESLiveAnchorGameFuncPanelReddotModifier> reddotModifier;
@property (retain, nonatomic) id<IESLiveAnchorGameFuncPanelGameingStateRouter> gameingStateRouter;
@property (weak, nonatomic) id<IESLiveAnchorGameFuncPanelReaction> reaction;
@property (readonly, copy, nonatomic) NSArray *gameModels;
@property (readonly, copy, nonatomic) NSArray *gameModelsInCurrentScene;
@property (readonly, copy, nonatomic) NSDictionary *groupPropertyDic;
@property (readonly, copy, nonatomic) NSArray *groupOrderArr;
@property (readonly, copy, nonatomic) NSArray *sectionOrderArr;
@property (readonly, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL isTipGuideShow;
@property (readonly, nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)hasPreviewGameModel;
- (void)updateNeedShowInteractiveGameView:(BOOL)a0;
- (void)p_setupObservers;
- (void)selectAnchorInteractiveGameItem:(id)a0 fromButton:(BOOL)a1;
- (void)displayAnchorInteractiveGameItem:(id)a0 hasDisplayed:(BOOL)a1;
- (void)hideAnchorInteractiveEntranceViewWithCompletion:(id /* block */)a0;
- (void)removeTipView;
- (void)processWhenStartAnchorInteractiveGameItem:(id)a0 source:(id)a1 activityName:(id)a2 sourceFrom:(id)a3 fromButton:(BOOL)a4;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2 scene:(unsigned long long)a3;
- (void)fetchInteractiveListWithSource:(id)a0;
- (void)asyncLoadInteractiveListWithCompletion:(id /* block */)a0;
- (void)loadInteractiveListWithCompletion:(id /* block */)a0;
- (void)tapToolbarGameEntrance;
- (void)markShowInteractiveGameViewWithSource:(id)a0;
- (void)interactiveSceneDidStart:(unsigned long long)a0;
- (void)interactiveSceneDidJoinChannel:(unsigned long long)a0;
- (void)interactiveSceneDidEnd:(unsigned long long)a0;
- (void)updateInteractiveList:(id)a0;
- (void)updateInteractiveGamePanelRedDot;
- (void)updateInteractivePanelTip;
- (void)fetchInteractiveListWithWithCompletion:(id /* block */)a0 source:(id)a1;
- (void)trackGameItemDidClick:(id)a0 source:(id)a1;
- (BOOL)isInteractGameItemFromPlaymodePanel:(id)a0;
- (long long)playmodeTypeWithInteractGameItem:(id)a0;
- (id)tryGetIteractiveGameTypeForDynamicItem:(id)a0;
- (void)trackProphetEvent;
- (long long)getSelectedGroup;
- (void).cxx_destruct;
- (void)dealloc;

@end
