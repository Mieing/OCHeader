@class NSString, IESGCPXPlayGameDraggableView;

@interface IESGCPCGDraggableComponent : IESGCPCGInstanceBaseComponent <IESGCPCGDraggableRouter, IESGCPCGInstanceActions, IESGCPCGContainerActions, IESGCPCGMessageChannelActions>

@property (retain, nonatomic) IESGCPXPlayGameDraggableView *draggableView;
@property (copy, nonatomic) NSString *welfareTriggerType;
@property (nonatomic) BOOL showExitDraggable;
@property (nonatomic) BOOL isDelayDraggableGuide;
@property (copy, nonatomic) id /* block */ delayedGuideBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)componentDidAttached;
- (id)draggableItemView;
- (void)showDraggableView;
- (void)showSidebarGuideViewIfNeeded:(id)a0;
- (void)shouldShowDraggableGuide:(BOOL)a0;
- (void)executeShowDraggableGuideWhenReady;
- (void)didReceiveServerPushNoticeWithBiz:(id)a0 type:(id)a1 data:(id)a2;
- (void)containerWillDismissedInPresent:(BOOL)a0;
- (void)showDraggableGuideSettingView:(id)a0;
- (BOOL)_allShowCountLimitIsMetWithPackageName:(id)a0;
- (void)_onDraggableViewClicked;
- (void)_showDraggableWithStyle:(long long)a0;
- (void)_addAllShowCountAndStoreWithPackageName:(id)a0;
- (long long)_getWelfareShowCountWithTriggerType:(id)a0 withPackageName:(id)a1;
- (void)_showDraggableViewRedPoint;
- (void)_addWelfareShowCountAndStoreWithTriggerType:(id)a0 withPackageName:(id)a1;
- (void)_onDraggableWelfareGuideDidClick;
- (void)_trackEvent:(id)a0 extra:(id)a1;
- (BOOL)_shouldShowSidebarGuideView:(id)a0;
- (void)_lynxPanelSwitchToTargetTab:(long long)a0 withAction:(id /* block */)a1;
- (void)_addSidebarDailyShowCountAndStore;
- (void)_addSidebarAllShowCountAndStore;
- (void)_storeSidebarLastShowDate;
- (long long)_getSidebarDailyShowCount;
- (id)_getSidebarLastShowDate;
- (long long)_daysFromDate:(id)a0 toDate:(id)a1;
- (long long)_getSidebarAllShowCount;
- (long long)_getAllShowCountWithPackageName:(id)a0;
- (id)_getAllShowTipCountKeyWithPackageName:(id)a0;
- (long long)_getTipDailyShowCountWithDateKey:(id)a0 countKey:(id)a1;
- (void)_storeWithCount:(long long)a0 withKey:(id)a1;
- (id)_getWelfareShowTipCountKey:(id)a0 withPackageName:(id)a1;
- (id)_getFunctionPanelNameWithTab:(long long)a0;
- (void).cxx_destruct;

@end
