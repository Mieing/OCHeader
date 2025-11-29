@class NSString, NSMutableArray, NSMutableSet;
@protocol WCFinderNearbyFlowViewModelDelegate;

@interface WCFinderNearbyFlowViewModel : NSObject <WCFinderDataItemExt, WCFinderNearbyStreamFetchMgrExt>

@property (retain, nonatomic) NSMutableArray *allDataItems;
@property (nonatomic) unsigned long long maxTid;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (nonatomic) BOOL hasFetchEnterData;
@property (nonatomic) unsigned long long preFetchNextPageIndex;
@property (nonatomic) BOOL stopFetchNextPage;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) int commentScene;
@property (weak, nonatomic) id<WCFinderNearbyFlowViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0 commentScene:(int)a1 stopFetchNextPage:(BOOL)a2 hasFetchEnterData:(BOOL)a3 preFetchNextPageIndex:(unsigned long long)a4;
- (void)fetchMoreNearbyList;
- (long long)contentIndexOfTid:(id)a0;
- (id)contentVMWithTid:(id)a0;
- (void)clearAllContentVMLayoutCache;
- (void)realRemoveContentVMFromDataSource:(id)a0;
- (void)appendFinderContentVM:(id)a0;
- (void)contentUnlikeFeedback:(id)a0 subType:(long long)a1;
- (BOOL)isValidServerDataItem:(id)a0;
- (id)transformFinderItemToContentVM:(id)a0;
- (id)transformHistoryFinderItemToContentVM:(id)a0;
- (void)addFavRelateActionWithContentVM:(id)a0 relateActionType:(unsigned long long)a1;
- (void)onFinderDataItemDelete:(id)a0;
- (void)onFinderDataItemDeleteFromScene:(int)a0 tid:(id)a1 toastWording:(id)a2;
- (void)onFinderDataItemDeleteBySpamList:(id)a0;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)a0;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onNearbyStreamFetchTriggerCleanAction:(unsigned long long)a0;
- (void)onNearbyStreamFetchError:(unsigned long long)a0;
- (void)onNearbyStreamFetchNoMoreData:(unsigned long long)a0;
- (void)onNearbyStreamFetchWillSuccess:(unsigned long long)a0;
- (void)onNearbyStreamFetchSuccess:(unsigned long long)a0 dataItems:(id)a1 userLocation:(id)a2 preFetchNextPageIndex:(unsigned long long)a3;
- (void)onNearbyStreamFetchHistory:(unsigned long long)a0 dataItems:(id)a1;
- (void).cxx_destruct;

@end
