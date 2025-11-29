@class WCDataItem, NSString, NSArray;

@interface WCMomentsShareScopeViewModel : NSObject <WCFacadeExt>

@property (retain, nonatomic) WCDataItem *hostDataItem;
@property (nonatomic) BOOL isBlackList;
@property (retain, nonatomic) NSString *shareScopeTitle;
@property (retain, nonatomic) NSArray *usernameList;
@property (retain, nonatomic) NSArray *tagIdList;
@property (nonatomic) BOOL isFilterTagDataEnabled;
@property (copy, nonatomic) id /* block */ hostDataItemUpdateBlock;
@property (nonatomic) long long privacy;
@property (nonatomic) BOOL isModifyShareScopeEnabled;
@property (nonatomic) BOOL showBottomExpiredTip;
@property (nonatomic) double targetListHeight;
@property (nonatomic) long long loadMoreThreshold;

- (id)initWithHostDataItem:(id)a0 isNeedForceUpdate:(BOOL)a1;
- (id)initWithBlackMode:(BOOL)a0 usernameList:(id)a1 tagIdList:(id)a2 title:(id)a3;
- (id)initWithBlackMode:(BOOL)a0 usernameList:(id)a1 tagIdList:(id)a2 title:(id)a3 privacy:(long long)a4;
- (void)dealloc;
- (void)_initBaseData;
- (void)prepareDataItemWithCompleteBlock:(id /* block */)a0;
- (BOOL)hasShareScopeList;
- (id)noMoreDataTips;
- (BOOL)shouldShowLoadMoreCellForTagListAtIndex:(long long)a0;
- (BOOL)shouldShowLoadMoreCellForContactListAtIndex:(long long)a0;
- (BOOL)shouldShowLoadMore:(long long)a0;
- (void)onUpdateDataItemDetailFinished:(long long)a0 itemId:(id)a1 dataItem:(id)a2;
- (void)onModifyDataItemShareScopeFinished:(long long)a0 dataItemID:(id)a1;
- (void)_initDataFromDataItem:(id)a0 isNeedForceUpdate:(BOOL)a1;
- (void)_resetShareScopeFromDataItem:(id)a0;
- (void)_setupShareScopeData:(BOOL)a0;
- (void)_initDataFromRawDataWithMode:(BOOL)a0 usernameList:(id)a1 tagIdList:(id)a2 title:(id)a3;
- (void)_onGetShareScopeData;
- (BOOL)_shouldShowLoadMoreCellForDataList:(id)a0 atCellIndex:(long long)a1;
- (void)_logStatusWithMsg:(id)a0;
- (void).cxx_destruct;

@end
