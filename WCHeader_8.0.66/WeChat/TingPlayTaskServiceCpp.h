@class NSString;

@interface TingPlayTaskServiceCpp : TingApiListSourceCpp <TingPlayTaskService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createEmpty;
+ (id)createWithItem:(id)a0;
+ (id)createWithTingItems:(id)a0;
+ (id)createWithListenIdList:(id)a0;
+ (id)createWithCategoryAndItemList:(id)a0 itemList:(id)a1;
+ (id)createWithCategoryAndInitialItem:(id)a0 itemList:(id)a1 mergeWithBaseListenId:(BOOL)a2 sessionBuffer:(id)a3;
+ (id)createWithCategoryAndTingListSource:(id)a0 context:(id)a1;
+ (id)createWithTapeInfoAndTingListSource:(id)a0 context:(id)a1;
+ (id)createWithExistedSource:(id)a0;
+ (id)castFromListSource:(id)a0;

- (void)load:(int)a0;
- (void)preload;
- (BOOL)isLoading;
- (void)setEnterScene:(int)a0;
- (void)setPlayTaskContext:(id)a0;
- (id)getPlayTaskContext;
- (id)getItemInfoWithId:(id)a0;
- (id)toTapeItem;
- (void)addPlayTaskClient:(id)a0;
- (void)removePlayTaskClient:(id)a0;
- (void)clearPlayTaskClient;
- (void)addWeakPlayTaskClient:(id)a0;
- (void)checkUpdateListenItem:(id)a0;
- (void)setPlayListTTSListner:(id)a0;
- (void)loadMoreWithDirection:(int)a0 canSwitchRange:(BOOL)a1;
- (BOOL)hasMoreWithDirection:(int)a0;
- (BOOL)isLoadingWithDirection:(int)a0;
- (void)edit:(id)a0;
- (BOOL)modifyItem:(id)a0;
- (void)insert:(id)a0 index:(int)a1;
- (void)updateCurrentTapeItem;
- (id)generateListSourceContext;
- (BOOL)isEnableRecommendListWhenPlaySingle;
- (void)enableFetchRecommendListWhenPlaySingle:(BOOL)a0;
- (void)stashList;
- (void)applyListStash;
- (void)reloadListOrderType:(int)a0;
- (id)fetchMoreFromCache;
- (void)refreshItem:(id)a0;
- (void)setCurrCategorySessionExtInfo:(id)a0;
- (id)getCurrCategorySessionExtInfo;
- (BOOL)isLiveTaskService;
- (id)getLiveTaskCategoryItem;
- (void)setupNewTaskService:(id)a0;
- (id)getMusicChatRoomInfo;
- (BOOL)needInitReload;
- (void)markNotInitReload;

@end
