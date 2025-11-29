@class AWEShareContext, NSArray, AWEIMShareContactListViewUtility, NSSet, NSString, AWEIMMessageShareCellViewModel, NSDictionary, NSMutableArray, AWEIMLiveSubscribeMemberDataManager;
@protocol AWEIMShareContactListViewDataSourceDelegate;

@interface AWEIMShareContactListViewLiveSubscribeDataSource : NSObject <AWEIMShareContactListViewDataSourcePtotocol>

@property (retain, nonatomic) AWEIMLiveSubscribeMemberDataManager *liveSubscribeMemberDataManager;
@property (nonatomic) BOOL hasMoreRecentData;
@property (copy, nonatomic) NSArray *sectionViewModels;
@property (copy, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) AWEIMMessageShareCellViewModel *groupEntranceFakeCellVM;
@property (retain, nonatomic) AWEIMMessageShareCellViewModel *createGroupCellVM;
@property (retain, nonatomic) NSMutableArray *sectionDataInSearching;
@property (retain, nonatomic) NSMutableArray *sectionTitlesInSearching;
@property (retain, nonatomic) NSMutableArray *recentContactsWithoutRecommendList;
@property (copy, nonatomic) NSSet *recentContactsWithoutRecommendUidSet;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) AWEIMShareContactListViewUtility *shareContactListViewUtility;
@property (weak, nonatomic) id<AWEIMShareContactListViewDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (BOOL)enableLoadMore;
- (id)initWithRouterParams:(id)a0 shareContext:(id)a1;
- (void)fetchDataOptimizeWithDate:(id)a0 insertStickOnTopChats:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldHideSearchView;
- (void)updateSectionData:(id)a0;
- (void).cxx_destruct;

@end
