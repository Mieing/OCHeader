@class HTSLiveFeedDataApi, IESLiveFeedDrawerViewControllerContext, NSHashTable, NSString, NSMutableArray;
@protocol IESLiveVSFeedChainDataSourceDelegate;

@interface IESLiveVSFeedChainDataSource : NSObject <IESLiveVSFeedChainSectionDelegate, IGListAdapterDataSource>

@property (weak, nonatomic) id<IESLiveVSFeedChainDataSourceDelegate> delegate;
@property (retain, nonatomic) HTSLiveFeedDataApi *feedApi;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (retain, nonatomic) NSMutableArray *cellModels;
@property (retain, nonatomic) NSHashTable *allSectionControllers;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL hasMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (void)didSetAttachingDIContext;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (BOOL)p_isFromVSSportsOfEnterFrom:(id)a0;
- (id)parseFeedItem:(id)a0;
- (void)fetchFeedList:(id)a0 method:(unsigned long long)a1 result:(id /* block */)a2;
- (void)monitorFeedType:(unsigned long long)a0 withError:(id)a1 startTime:(double)a2;
- (id)parseCellModelsFromResponse:(id)a0;
- (id)feedUrlEnterfrom:(id)a0 enterMethod:(id)a1;
- (double)getCaculateItemTitleHeightWithCurrentIndex:(long long)a0 itemWidth:(double)a1;
- (id)getCellModels;
- (void).cxx_destruct;
- (void)refresh;
- (BOOL)isEmpty;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
