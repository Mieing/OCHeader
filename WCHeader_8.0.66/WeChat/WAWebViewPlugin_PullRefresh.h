@class NSString, WAWebViewPullDownRefreshView;

@interface WAWebViewPlugin_PullRefresh : WAWebViewPluginBase <WAWebViewPullDownRefreshViewDelegate>

@property (nonatomic) BOOL isEnablePullRefresh;
@property (nonatomic) BOOL isReflashingHead;
@property (retain, nonatomic) WAWebViewPullDownRefreshView *headRefreshView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)changePullRefreshMode:(long long)a0;
- (void)genHeaderRefreshViewWithMode:(long long)a0;
- (void)delHeaderRefreshView;
- (void)enablePullRefresh:(double)a0 mode:(long long)a1;
- (void)disablePullRefresh;
- (void)startPullRefresh;
- (void)stopPullRefresh;
- (void)onStartRefreshing;
- (void).cxx_destruct;

@end
