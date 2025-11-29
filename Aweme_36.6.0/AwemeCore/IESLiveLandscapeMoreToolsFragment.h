@class HTSLiveExpandToolbarItem, UITapGestureRecognizer, NSString, UIView, IESLiveLandscapeMoreToolsStore, IESLivePanelCollectionView;
@protocol IESLiveMoreToolsDataController, HTSLiveToolbarProvider;

@interface IESLiveLandscapeMoreToolsFragment : IESLiveRoomComponent <IESLiveLandscapeAudienceMoreToolsProvider, IESLiveLandscapeMoreToolsReaction, IESLiveRoomThemeActions>

@property (retain, nonatomic) IESLiveLandscapeMoreToolsStore *store;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *moreItem;
@property (nonatomic) BOOL panelShowing;
@property (retain, nonatomic) IESLivePanelCollectionView *panelCollection;
@property (retain, nonatomic) id<HTSLiveToolbarProvider> toolbarProvider;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) int loadStrategy;
@property (nonatomic) BOOL isFirstClickItem;
@property (retain, nonatomic) id<IESLiveMoreToolsDataController> dataController;
@property (nonatomic) BOOL isFirstShowItem;
@property (nonatomic) BOOL dealRepetitionShowEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowing;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)showComponent;
- (void)showPanel;
- (void)remoteRoomDataReady:(id)a0;
- (void)hidePanel;
- (BOOL)isEnableMoreTools;
- (void)changeRedDotOnToolBar:(BOOL)a0;
- (void)changeRedDotByInsideItemOnToolBar;
- (void)refreshPanelIfNeeded;
- (void)updateFlexInteractItemImage:(id)a0 selected:(BOOL)a1;
- (void)onToolbar:(id)a0 sizeChanged:(struct CGSize { double x0; double x1; })a1;
- (void)onExpandGroupShow:(BOOL)a0;
- (void)roomThemeNeedRefresh;
- (void)loadToolBarItem;
- (void)removeToolBarItem;
- (void)refreshPanel;
- (void)setupGuideDotForToolbarItem:(id)a0;
- (void)p_removeMoreItemFromDataSourceWithIdentifier:(id)a0;
- (void)showPanelUsingLocalData:(BOOL)a0;
- (void)p_showPanelForItems:(id)a0;
- (void)changeShowReachBadgeIcon:(BOOL)a0;
- (id)createPanelConfig;
- (BOOL)needItemsShowRedDot;
- (void)filterTopNRedDotForMoreToolsItem;
- (void)loadToolBarItemIfNeeded;
- (id)getFilteredMoreToolItems;
- (void)hidePanelAccess;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (void)removeItemWithIdentifier:(id)a0;

@end
