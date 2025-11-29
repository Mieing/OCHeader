@class AWEUGCrossDiversionInfo, AWEUGCrossDiversionBuoyView, NSString;

@interface AWEUGCrossDiversionServiceImpl : HTSService <AWEUGCrossDiversionBuoyViewDelegate, AWERouterDelegate, AWEVideosInsertLifeCycleProtocol, AWEUGCrossDiversionService>

@property (retain, nonatomic) AWEUGCrossDiversionInfo *crossDiversionInfo;
@property (retain, nonatomic) AWEUGCrossDiversionBuoyView *buoyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidEnterBackground:(id)a0;
- (void)routerDidTransferWithURLString:(id)a0 fromViewController:(id)a1 toViewController:(id)a2 transitionType:(long long)a3;
- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (void)parseCrossDiversionScheme:(id)a0;
- (void)sceneDidAppeared:(id)a0;
- (void)videoInsertWithAwemeIDs:(id)a0 result:(BOOL)a1;
- (void)crossDiversionBuoyViewClosed;
- (void)crossDiversionBuoyViewTapped;
- (void)clearCrossDiversionBuoyView;
- (void)showCrossDiversionBuoyWithInfo:(id)a0;
- (void)trackBuoyViewDismissWithReason:(id)a0 switchScene:(id)a1;
- (void)trackBuoyViewShow;
- (void)setupSceneSwitchObservers;
- (void)sceneDidDisappeared:(id)a0;
- (void)onFeedDidEndDisplayCell:(id)a0;
- (void)trackBuoyViewClose;
- (void)trackBuoyViewClick;
- (void).cxx_destruct;
- (void)dealloc;

@end
