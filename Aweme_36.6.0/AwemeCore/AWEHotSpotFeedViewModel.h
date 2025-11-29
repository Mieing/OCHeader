@class AWEHotPointDataControllerCache, AWEHotSpotFeedInitialContext, AWEHotSpotBottomPostConfig, AWENewHotSearchModel, AWEHotPointFeedDataController, AWEHotSpotFeedStateModel;

@interface AWEHotSpotFeedViewModel : NSObject

@property (retain, nonatomic) AWEHotSpotFeedInitialContext *initialContext;
@property (retain, nonatomic) AWEHotSpotFeedStateModel *stateModel;
@property (retain, nonatomic) AWEHotPointDataControllerCache *dataControllerCache;
@property (retain, nonatomic) AWEHotSpotBottomPostConfig *postConfig;
@property (retain, nonatomic) AWENewHotSearchModel *currentHotSearchModel;
@property (retain, nonatomic) AWEHotPointFeedDataController *dataController;

- (void)configWithParamDict:(id)a0;
- (BOOL)isNearbyStyle;
- (id)getHandledOriginalDataArray:(id)a0 hotSpotModel:(id)a1 loadmoreHasMore:(BOOL)a2 needUpdateCount:(BOOL)a3;
- (BOOL)alreadyAddPreloadVideoCount;
- (BOOL)shouldForceOneVideo;
- (void).cxx_destruct;

@end
