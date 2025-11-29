@class NSMutableDictionary, NSString, NSMutableArray, AWELiveImproveController;

@interface AWELiveFeedImprove : HTSService <AWELiveFeedImproveService>

@property (retain, nonatomic) NSMutableDictionary *containerMap;
@property (weak, nonatomic) AWELiveImproveController *currentImproveController;
@property (retain, nonatomic) NSMutableArray *roomIdArray;
@property (retain, nonatomic) NSMutableDictionary *resolutionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerLoadWithType:(long long)a0;
- (void)containerDidAppearWithType:(long long)a0;
- (void)containerDidDisAppearWithType:(long long)a0;
- (void)containerFetchCompletionWithItems:(id)a0 containerType:(long long)a1;
- (void)containerLoadMoreCompletionWithItems:(id)a0 containerType:(long long)a1;
- (void)containerRefreshCompletionWithItems:(id)a0 containerType:(long long)a1;
- (void)containerHotRefreshWithItems:(id)a0 containerType:(long long)a1;
- (void)configureCellWithModel:(id)a0 atIndexPath:(id)a1 containerType:(long long)a2;
- (void)setCurrentIndex:(id /* block */)a0 containerType:(long long)a1;
- (void)setDataSource:(id /* block */)a0 containerType:(long long)a1;
- (void)setReferString:(id)a0 containerType:(long long)a1;
- (void)setDeleteAction:(id /* block */)a0 containerType:(long long)a1;
- (void)collectPreStreamResolution:(id)a0 roomId:(id)a1;
- (id)getResolutionByRoomId:(id)a0;
- (BOOL)isContinuouslyLiveStream:(id)a0 referString:(id)a1;
- (id)getImproveControllerWithContainerType:(long long)a0;
- (long long)awemeTypeFromReferString:(id)a0;
- (void).cxx_destruct;

@end
