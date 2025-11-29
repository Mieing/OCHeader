@class NSMapTable, NSMutableDictionary, NSDictionary, NSString, NSMutableArray;
@protocol IESLiveToolbarAPI, HTSLiveToolbarProvider;

@interface IESLiveToolbarDataControlFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, HTSLiveToolbarActions, IESLiveToolbarDataController, IESLiveToolbarDataChangeObserver>

@property (retain, nonatomic) id<IESLiveToolbarAPI> api;
@property (retain, nonatomic) NSMapTable *themeManagerTable;
@property (retain, nonatomic) NSMutableDictionary *itemPrepareShowMap;
@property (retain, nonatomic) NSMapTable *itemCanTransformTable;
@property (retain, nonatomic) id<HTSLiveToolbarProvider> toolbarProvider;
@property (nonatomic) unsigned long long changeOrientationMaxSlotCnt;
@property (retain, nonatomic) NSMutableArray *syncCheckComponents;
@property (retain, nonatomic) NSDictionary *preloadToolbarJsonData;
@property (nonatomic) BOOL didSyncToolbar;
@property (copy, nonatomic) id /* block */ triggerToolbarAnimationOnceBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)componentRefresh;
- (void)componentBeginAppear;
- (void)mountDidFinishForLevel:(long long)a0;
- (BOOL)containItem:(int)a0 inMorePanel:(BOOL)a1;
- (BOOL)containItemInSlot:(int)a0;
- (void)triggerItemAnimationAtOnceIfNeeded;
- (void)toolbarItemsChange;
- (void)resetToolbarItemVisibility;
- (BOOL)liveDynamicToolbarModifyPermutation;
- (BOOL)liveToolbarSyncType;
- (void)syncToolbarData:(id)a0;
- (void)comparePreloadToolbarDataWithNow;
- (BOOL)componentShouldBlock:(int)a0;
- (void)handlePrepareToShowComponent:(id)a0;
- (void)removeToolbarItemWithComponent:(id)a0 toMorePanel:(BOOL)a1;
- (void)removeMorePanelItemWithIdentifier:(id)a0;
- (void)handleRemoveComponent:(id)a0 withReason:(unsigned long long)a1;
- (void)handleUpdateComponent:(id)a0 source:(id)a1;
- (void)insertMorePanelItem:(id)a0;
- (id)findToolBarComponentDataInPreloadData:(id)a0 componentType:(int)a1;
- (BOOL)comparePreloadComponentData:(id)a0 nowComponentData:(id)a1;
- (void)toolbarDataService:(id)a0 didRegisteredHandler:(id)a1 forItemType:(int)a2;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
