@class NSString, AWERecordInspirationCategoryItem, NSDictionary, NSArray, ACCAIGCLoraProfileModel, NSTimer, AWECodeGenV1AiMarkPointResponse;

@interface ACCAIGCRecordListDataSource : NSObject <ACCAIGCRecordListDataSourceProtocol>

@property (copy, nonatomic) NSDictionary *selectedDict;
@property (nonatomic) long long selectedCount;
@property (retain, nonatomic) AWERecordInspirationCategoryItem *categoryItem;
@property (retain, nonatomic) AWERecordInspirationCategoryItem *configurationCategoryItem;
@property (retain, nonatomic) NSArray *inspirationModelArray;
@property (retain, nonatomic) NSArray *configurationModelArray;
@property (retain, nonatomic) NSArray *historyModelArray;
@property (retain, nonatomic) NSArray *wallHistoryModelArray;
@property (retain, nonatomic) NSArray *wallModelArray;
@property (nonatomic) BOOL historyHasMore;
@property (nonatomic) long long historyCursor;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (retain, nonatomic) NSTimer *profileTimer;
@property (nonatomic) BOOL isLoadingInspiration;
@property (readonly, nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL needRefreshWall;
@property (nonatomic) BOOL needRefreshInspiration;
@property (nonatomic) BOOL needRefreshHistory;
@property (nonatomic) BOOL needRefreshProfile;
@property (nonatomic) BOOL historyModelChangedWithDelete;
@property (nonatomic) long long limitExceededCounts;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL isLimitExceeded;
@property (nonatomic) BOOL hasResult;
@property (retain, nonatomic) AWECodeGenV1AiMarkPointResponse *unReadModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aiLoraProfileModelDidChange:(id)a0;
- (void)updateProfileModel:(id)a0;
- (void)loadWallData:(BOOL)a0 isFromInspiration:(BOOL)a1;
- (void)loadLibraryHistoryModel:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadInspirationModel:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)resetCacheData;
- (void)updateEnterTime:(double)a0;
- (void)timerEnd;
- (void)notifyRecordListUpdate;
- (void)multiLoraDidChange;
- (void)loadHistoryModel:(BOOL)a0;
- (id)selectedInProgressTaskIDs;
- (BOOL)adjustDeleteItems:(id)a0;
- (void)realDeleteSingleItemWith:(id)a0 groupItem:(id)a1 completion:(id /* block */)a2;
- (void)loadHistoryModelWith:(BOOL)a0 loadMore:(BOOL)a1 isFromInspiration:(BOOL)a2 completion:(id /* block */)a3;
- (void)loadConfigurationModelWithCompletion:(id /* block */)a0;
- (void)loadWallDataFormHistory;
- (id)coverPhotoWallModelWith:(id)a0 index:(long long)a1;
- (void)profileTimerAction;
- (void)loadHistoryModelWith:(BOOL)a0 loadMore:(BOOL)a1 isFromInspiration:(BOOL)a2 pageCount:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)initWithProfileModel:(id)a0;
- (BOOL)item_isSelected:(id)a0;
- (void)item_select:(id)a0 taskId:(id)a1;
- (void)item_deselect:(id)a0;
- (void)item_deselectAll;
- (void)deleteSelectedItems:(BOOL)a0 isFromInspiration:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateRecordModelUnreadStatus;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;
- (void)timerStart;

@end
