@class FinderLiveSquareStyleInfo, NSMutableDictionary, WCFinderLiveTabInfo, NSString, WCFinderLiveHomePageTabLiveStreamSectionViewModel, WCFinderFeedFlowView;
@protocol WCFinderLiveHomePageAggregationTabLiveStreamVMDelegate;

@interface WCFinderLiveHomePageAggregationTabLiveStreamVM : NSObject <WCFinderLiveExt>

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) WCFinderLiveTabInfo *jumpToTabInfo;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) NSMutableDictionary *dataModels;
@property (nonatomic) unsigned long long selectTabId;
@property (nonatomic) BOOL skipFeedsReport;
@property (weak, nonatomic) WCFinderLiveHomePageTabLiveStreamSectionViewModel *sectionVM;
@property (nonatomic) BOOL showLocationAuthorized;
@property (weak, nonatomic) id<WCFinderLiveHomePageAggregationTabLiveStreamVMDelegate> delegate;
@property (readonly, nonatomic) BOOL continueFlag;
@property (readonly, nonatomic) BOOL hasFetchData;
@property (retain, nonatomic) WCFinderLiveTabInfo *tabInfo;
@property (readonly, nonatomic) BOOL isFetchingData;
@property (weak, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (readonly, nonatomic) WCFinderLiveTabInfo *selectTabInfo;
@property (readonly, nonatomic) FinderLiveSquareStyleInfo *globalStyleInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSectionVM:(id)a0 tabInfo:(id)a1;
- (void)initDataModelIfNeeded;
- (void)makeBottomSkeletonData;
- (id)removeSkeletonDatas;
- (void)cancelAllCgi;
- (BOOL)hasNoData;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfSkeletonItems;
- (id)currentDataModel;
- (void)initTabDataModelWithTabInfo:(id)a0;
- (void)initSubTabDataModelWithTabInfo:(id)a0;
- (void)fetchMoreData;
- (void)refreshDataFromTop;
- (void)fetchMoreDataWithPullType:(unsigned long long)a0;
- (id)createFeedVMWithModel:(id)a0 isSkeleton:(BOOL)a1;
- (id)requestTabInfoWithDataModel:(id)a0;
- (void)updateState;
- (id)feedVMAtIndexPath:(id)a0;
- (id)currentContainerLastBuffer;
- (id)currentContainerReadIds;
- (void)selectSubTab:(id)a0 isToggle:(BOOL)a1 willSwitchBlock:(id /* block */)a2;
- (unsigned long long)indexOfTid:(id)a0;
- (void)removeDataWithTid:(id)a0;
- (void)resetExposeSession;
- (void).cxx_destruct;

@end
