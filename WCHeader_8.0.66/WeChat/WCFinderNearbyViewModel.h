@class NSString, NSArray, NSMutableSet, WCFinderFeedLayoutContentVM, NSMutableArray;
@protocol WCFinderNearbyViewModelDelegate;

@interface WCFinderNearbyViewModel : NSObject <WCFinderDataItemExt, WCFinderRedDotNotifyExt, WCFinderPostingCommentExt, WCFinderNearbyStreamFetchMgrExt, WCFinderLocationServiceExt, WCFinderLiveExt>

@property (retain, nonatomic) NSMutableArray *allDataItems;
@property (nonatomic) unsigned long long maxTid;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (copy, nonatomic) NSString *userCity;
@property (nonatomic) BOOL hasFetchEnterData;
@property (nonatomic) unsigned long long preFetchNextPageIndex;
@property (nonatomic) BOOL stopFetchNextPage;
@property (nonatomic) BOOL isLocationServiceAuthorized;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) WCFinderFeedLayoutContentVM *livingLayout;
@property (nonatomic) BOOL isFetchLivingStream;
@property (weak, nonatomic) id<WCFinderNearbyViewModelDelegate> delegate;
@property (retain, nonatomic) NSArray *commentFailTidArray;
@property (readonly, nonatomic) unsigned long long unReadMSGCount;
@property (readonly, nonatomic) unsigned long long commentFailTidCount;
@property (copy, nonatomic) NSString *enterDataReportID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isDataEmpty;
- (unsigned long long)sectionNums;
- (unsigned long long)rowNumsWithSection:(unsigned long long)a0;
- (long long)contentIndexOfTid:(id)a0;
- (id)vaildTopIndexPath;
- (BOOL)isDataIndexPath:(id)a0;
- (BOOL)isDataSection:(unsigned long long)a0;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (void)fetchLastestData;
- (void)fetchFirstPageData;
- (id)getUnreadDataItems;
- (void)updateExposureStatusOfContentVM:(id)a0;
- (BOOL)isValidServerDataItem:(id)a0;
- (id)contentVMWithTid:(id)a0;
- (void)appendFinderContentVM:(id)a0;
- (id)transformFinderItemToContentVM:(id)a0;
- (id)transformHistoryFinderItemToContentVM:(id)a0;
- (void)fetchMoreLivingList;
- (void)onNearbyStreamFetchTriggerCleanAction:(unsigned long long)a0;
- (void)onNearbyStreamFetchError:(unsigned long long)a0;
- (void)onNearbyStreamFetchNoMoreData:(unsigned long long)a0;
- (void)onNearbyStreamFetchSuccess:(unsigned long long)a0 dataItems:(id)a1 userLocation:(id)a2 preFetchNextPageIndex:(unsigned long long)a3;
- (void)onNearbyStreamLayoutInfoChange:(id)a0;
- (void)onNearbyStreamFetchHistory:(unsigned long long)a0 dataItems:(id)a1;
- (void)onFinderDataItemDelete:(id)a0;
- (void)onFinderDataItemDeleteFromScene:(int)a0 tid:(id)a1 toastWording:(id)a2;
- (void)onFinderDataItemDeleteBySpamList:(id)a0;
- (void)onFinderDataItemDeleteByUserPageMergeWithTidList:(id)a0;
- (void)onFinderDataItemCleanBySecurityUpgrade;
- (void)onFinderDataCacheHasBeCleaned;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(BOOL)a0;
- (void)clearAllCachedDataItem;
- (void)onFinderLiveCloseWithTid:(id)a0;
- (void).cxx_destruct;

@end
