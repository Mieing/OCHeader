@class NSMutableArray, NSString, AWEHotSpotListModel, AWERVDetailPageContext, AWERelatedVideoDataManager;

@interface AWERVHotVideoViewModel : NSObject

@property (retain, nonatomic) AWERelatedVideoDataManager *dataManager;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) NSMutableArray *horizontalScrollDataArray;
@property (copy, nonatomic) NSString *currentCursor;
@property (retain, nonatomic) AWEHotSpotListModel *currentHotSpotListModel;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL refreshHasMore;
@property (nonatomic) BOOL loadMoreHasMore;

- (id)initWithPageContext:(id)a0;
- (BOOL)checkShouldRefreshHotHorizontalVideo;
- (void)trackRelatedHotspotContextShowWithModel:(id)a0;
- (void)trackRelatedHotspotHorizontalShowWithModel:(id)a0;
- (void)refreshHotVideoDataWithCompletion:(id /* block */)a0;
- (void)trackRelatedHotspotContextClick;
- (void)loadMoreHotVideoDataWithCompletion:(id /* block */)a0;
- (void)trackRelatedHotspotHorizontalClickWithModel:(id)a0 actionType:(id)a1;
- (id)getHotspotIdWithModel:(id)a0;
- (id)filterOtherThemeAwemeModels:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)addObservers;
- (id)requestParams;

@end
