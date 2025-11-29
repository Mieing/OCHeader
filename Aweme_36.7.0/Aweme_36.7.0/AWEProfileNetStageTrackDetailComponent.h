@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEProfileNetStageTrackDetailComponent : AWEUserDetailBaseComponent <AWEProfilePagePerfTrackComponentProtocol, AWEProfileNetStageTrackDetailComponentProtocol>

@property (nonatomic) double schemaParsedTime;
@property (retain, nonatomic) NSDictionary *postPerfParams;
@property (retain, nonatomic) NSMutableDictionary *bannerLoadParams;
@property (nonatomic) BOOL isTraceReported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)postPreloadRecordBegin:(id)a0;
- (void)collectPostDataManagerPerfParams:(id)a0;
- (void)postPreloadRecordEnd:(id)a0 error:(id)a1;
- (void)userPreloadRecordBegin:(id)a0;
- (void)userPreloadRecordEnd:(id)a0 error:(id)a1;
- (void)postPreloadAddToTrace:(id)a0;
- (void)trackBannerCoverLoadWith:(long long)a0;
- (id)profileCustomNetStageEventWithTrace:(id)a0 rawParams:(id)a1;
- (void)perfTrackPreloadDuration:(id)a0 prefix:(id)a1;
- (id)perfTrace;
- (id)preloadCustomParams:(id)a0 prefix:(id)a1 baseTime:(double)a2;
- (id)postPerfParamsSafely;
- (id)durationToMS:(double)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)onInit;

@end
