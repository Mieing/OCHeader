@class WCHomepageDataProvider_Sns, NSString, MyWCDB, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, WCHomepageDelegate;

@interface WCHomepageMgr : MMObject <WCHomePageDataProviderDelegate, WCHomePageDataProviderStarDelegate> {
    BOOL m_fristReturnAll;
    long long m_firstRequestResult;
    NSString *m_firstRequestTip;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *homepageDBQueue;
@property (nonatomic) int beginHomePageCount;
@property (retain, nonatomic) NSMutableArray *m_cacheBeforeFirstJump;
@property (nonatomic) BOOL prePageDayEndFlag;
@property (weak, nonatomic) id<WCHomepageDelegate> m_delegate;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, nonatomic) long long homepageType;
@property (readonly, copy, nonatomic) NSString *homepageKey;
@property (retain, nonatomic) NSMutableArray *m_cache;
@property (retain, nonatomic) MyWCDB *m_database;
@property (retain, nonatomic) WCHomepageDataProvider_Sns *m_dataProvider;
@property (readonly, nonatomic) BOOL isMine;
@property (readonly, nonatomic) WCHomepageMgr *starHomepageMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homepageKeyWithUsername:(id)a0 homepageType:(long long)a1;

- (id)initWithUsername:(id)a0 homepageType:(long long)a1;
- (void)dealloc;
- (id)dataProvider;
- (void)setM_username:(id)a0;
- (void)delectCacheIfStranger;
- (void)beginHomepage;
- (void)endHomepage;
- (BOOL)updateHead;
- (BOOL)updateHeadWithSource:(long long)a0;
- (BOOL)updateTail;
- (id)getHomepageData;
- (void)beginMediaHomepage;
- (unsigned int)homepageDataType;
- (BOOL)updateMediaHead;
- (BOOL)updateMediaTail;
- (void)onDataUpdated:(id)a0 maxItemID:(unsigned long long)a1 minItemID:(unsigned long long)a2 reqFirstPageMd5:(id)a3;
- (void)onReturnLimitFeedId:(unsigned long long)a0;
- (void)onYearMonthInfosUpdated:(id)a0;
- (void)onReturnIsAllData:(id)a0 andAdData:(id)a1;
- (void)onOnceReturnAllDataWithRet:(long long)a0 andTip:(id)a1;
- (void)onOnceReturnAllDataRenderNoMore;
- (void)onResetOnceReturnAllDataRenderNoMore;
- (void)onNoMoreDataWithRet:(long long)a0 andTip:(id)a1;
- (void)onReturnBGUserInfo:(id)a0;
- (void)onHomepagePrePageUpdate:(id)a0 withChangedTime:(unsigned int)a1 prePageEnd:(BOOL)a2 success:(BOOL)a3;
- (void)onFetchDataBeforeJumpToItemId:(id)a0 dataList:(id)a1 success:(BOOL)a2;
- (void)onStarDataUpdated:(id)a0 nextPageMaxID:(unsigned long long)a1;
- (void)modifyDataItem:(id)a0 notify:(BOOL)a1;
- (void)insertOrUpdateDataItem:(id)a0 notify:(BOOL)a1;
- (void)deleteDataItem:(id)a0 notify:(BOOL)a1;
- (void)modifyCache:(id)a0;
- (id)findDataItemInCacheByItemID:(id)a0;
- (void)onServiceMemoryWarning;
- (unsigned long long)onServiceCleanCache;
- (id)firstItemIdInDB;
- (BOOL)fetchDataBeforeJumpToItemId:(unsigned long long)a0;
- (BOOL)jumpState;
- (BOOL)updatePrePage;
- (void)clearJumpState;
- (BOOL)isPrePageDayEnd;
- (void)tryClearJumpState;
- (void).cxx_destruct;

@end
