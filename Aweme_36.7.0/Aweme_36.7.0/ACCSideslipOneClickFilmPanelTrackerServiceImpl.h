@protocol ACCEditOneClickFilmTrackService, ACCSideslipPropInternalService;

@interface ACCSideslipOneClickFilmPanelTrackerServiceImpl : ACCSideslipPropPanelTrackerServiceImpl

@property (weak, nonatomic) id<ACCEditOneClickFilmTrackService> trackService;
@property (weak, nonatomic) id<ACCSideslipPropInternalService> sideslipPropInternalService;
@property (nonatomic) BOOL hasAppliedEffectBefore;

- (void)trackerPropSkipWithShouldReport:(BOOL)a0;
- (void)trackerPropClick;
- (void)trackerPropClickWithModel:(id)a0;
- (BOOL)hasPropShow;
- (void)trackerPanelShow;
- (void)trackerPanelClickDismiss;
- (void)trackerClickSaveFavorite;
- (void)trackerClickCancelFavorite;
- (void)trackerPropShowWithIndex:(long long)a0;
- (void)trackerSlideslipFetchListDataPerformanceWithDuration:(double)a0 dataSource:(id)a1 isCache:(BOOL)a2 error:(id)a3;
- (void).cxx_destruct;

@end
