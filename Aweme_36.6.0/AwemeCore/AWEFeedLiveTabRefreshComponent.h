@class NSTimer, _TtC16AWELiveSwiftImpl26AWEFeedLiveTabParamsCenter, NSString;

@interface AWEFeedLiveTabRefreshComponent : AWEFeedLiveTabBaseComponent <AWEFeedLiveTabViewControllerLifeCycleAction>

@property (nonatomic) double autoRefreshStartTime;
@property (nonatomic) double lastEnterTabTime;
@property (retain, nonatomic) NSTimer *autoRefreshTimer;
@property (nonatomic) BOOL isTabDisappear;
@property (retain, nonatomic) _TtC16AWELiveSwiftImpl26AWEFeedLiveTabParamsCenter *paramsCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)feedLiveTabDidEnter:(id)a0;
- (void)feedLiveTabDidLeave;
- (void)feedLiveTabWillAppear:(id)a0;
- (void)feedLiveTabDidDisappear;
- (void)feedLiveTabDidEnterBackground;
- (void)feedLiveTabDidEnterForeground;
- (void)feedLiveTabAllPageRefresh;
- (void)bindService;
- (double)heightOfComponent;
- (void)p_autoRefreshLocalComponent:(id)a0;
- (void)p_refreshAllLiveTabPageIfNeed;
- (void)p_autoRefreshTimerInvalid;
- (id)p_appearRefreshParams;
- (void)p_refreshLiveTabPageWithBizParams:(id)a0 completion:(id /* block */)a1;
- (void)p_refreshLiveTabComponentsIfNeed:(id)a0;
- (void)p_refreshDidFinish;
- (void)p_requestLocalComponentsWithCompletion:(id /* block */)a0;
- (id)p_addRequestParams;
- (void)p_clearRequestParams;
- (void)p_requestLocalComponentsWithBizParams:(id)a0 completion:(id /* block */)a1;
- (double)topPadding;
- (void).cxx_destruct;
- (id)contentView;
- (id)init;

@end
