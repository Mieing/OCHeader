@class NSData, NSString, FinderJustWatchControl, WCFinderCGIProfile, FinderBizInfo_BizInfo, NSDictionary, NSMutableSet, NSMutableArray, WCFinderCoverLoadCostTime;
@protocol WCFinderBrandStreamProfileViewModelDelegate;

@interface WCFinderBrandStreamProfileViewModel : NSObject <WCFinderUserPageFetchExt>

@property (copy, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSDictionary *jumpInfoDict;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSMutableSet *containedTidSet;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long pullType;
@property (nonatomic) BOOL isRequestingData;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL hasFetchData;
@property (retain, nonatomic) FinderBizInfo_BizInfo *bizInfo;
@property (retain, nonatomic) FinderJustWatchControl *justWatchControl;
@property (retain, nonatomic) NSMutableArray *pendingFetchJustWatchFeedBlocks;
@property (retain, nonatomic) NSString *pendingCheckJustWatchTid;
@property (weak, nonatomic) id<WCFinderBrandStreamProfileViewModelDelegate> delegate;
@property (retain, nonatomic) NSString *showJustWatchTid;
@property (retain, nonatomic) NSString *showPostTimeFeedTid;
@property (nonatomic) long long justWatchBannerStatus;
@property (nonatomic) long long justWatchFeedIndex;
@property (nonatomic) BOOL isHalfScreen;
@property (retain, nonatomic) WCFinderCGIProfile *cgiProfile;
@property (retain, nonatomic) WCFinderCoverLoadCostTime *coverCost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBizUsername:(id)a0 brandFinderJumpInfo:(id)a1;
- (void)fetchLocalDataItems;
- (void)_updateShowPostTimeTid;
- (BOOL)isFromFinder;
- (int)fromFinderScene;
- (id)finderUsername;
- (id)finderContact;
- (id)fromTid;
- (id)dataList;
- (unsigned long long)numberOfItem;
- (id)contentVMAtIndexPath:(id)a0;
- (id)contentVMForTid:(id)a0;
- (id)indexPathForTid:(id)a0;
- (void)requestDataFromTop;
- (void)requestNextData;
- (void)fetchJustWatchFeed:(id /* block */)a0;
- (void)_continueFetchJustWatchFeed:(id)a0 limit:(long long)a1 complete:(id /* block */)a2;
- (void)addRequestNextPageBlocks:(id /* block */)a0;
- (void)invokeJustWatchWaitBlocks:(BOOL)a0;
- (void)checkJustWatchAfterLoadFeeds:(BOOL)a0;
- (id)createFinderBrandProfileViewModel;
- (void)requestDataWithPullType:(unsigned long long)a0 complete:(id /* block */)a1;
- (void)updateState;
- (id)tranformDataItemArray:(id)a0;
- (void)addContainedTid:(id)a0;
- (id)filterDataArray:(id)a0;
- (void)onFinderUserPageFetchSuccess:(id)a0;
- (void)onFinderUserPageFetchFail:(int)a0;
- (void).cxx_destruct;

@end
