@class AWEIMNotificationListDataController, NSMutableDictionary, AWEPerformanceMeasureTask, NSMutableArray;

@interface AWEIMFansDataViewModel : AWEIMFansBaseViewModel

@property (nonatomic) BOOL isUnreadCountSetFromDataFetch;
@property (retain, nonatomic) NSMutableDictionary *operationsInCache;
@property (nonatomic) BOOL dataSourceChanging;
@property (nonatomic) BOOL hasFetchedData;
@property (retain, nonatomic) AWEIMNotificationListDataController *fansDataController;
@property (retain, nonatomic) NSMutableArray *cellViewModels;
@property (retain, nonatomic) AWEPerformanceMeasureTask *loadMorePerformanceTask;

- (BOOL)isRequestOnAir;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)vcdToastText;
- (id)cacheModelForUID:(id)a0;
- (void)refreshDataByPullDown:(BOOL)a0;
- (void)refreshUnreadCountWithDataSource:(id)a0;
- (id)fansDataSourceUserIDs;
- (BOOL)isFansNoticeCacheExpired;
- (id)p_createDisposableRefreshDataLoader:(BOOL)a0;
- (void)fetchFansNoticeCache:(id)a0;
- (void)fetchContactKeys:(id)a0;
- (void)fetchFansNoticeServer:(id)a0;
- (void)fetchRecommendData:(id)a0;
- (void)refreshDataCompletion:(id)a0;
- (void)updateCellViewModels:(id)a0 needReset:(BOOL)a1;
- (void)initializeConsistencyChecker;
- (void)p_deleteTheRemovingNoticeIDOfSnackbar;
- (void)p_updateUsersByOperationDic;
- (unsigned long long)getUnreadCountWithDataSource:(id)a0;
- (void)trackCountConsistencyWithCount:(unsigned long long)a0;
- (BOOL)p_enableReloadTabelViewAfterFetchServer:(id)a0 withList:(id)a1;
- (void)p_udpateLastReadNewFansNoticeID;
- (unsigned long long)fansNoticeCount;
- (void)updateOfficialChatNoti;
- (void)removeCellViewModelAtIndex:(long long)a0;
- (void)recordOperationBeforeFinishFetchWithUser:(id)a0 operationType:(long long)a1 newfollowStatus:(long long)a2;
- (void)removeNoticeIDInCache:(id)a0;
- (void)insertCellViewModel:(id)a0 atIndex:(long long)a1;
- (void)setUnreadCount:(long long)a0;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)refreshData;

@end
