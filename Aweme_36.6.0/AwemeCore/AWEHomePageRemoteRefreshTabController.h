@interface AWEHomePageRemoteRefreshTabController : AWEHomePageRemoteCommonController

@property (nonatomic) BOOL isConsumed;
@property (nonatomic) BOOL isSingleCell;

- (void)homePageRemotePanelDidShow;
- (BOOL)isBusinessConsumed;
- (BOOL)canShowCellView;
- (void)homePageRemoteCellClick;
- (BOOL)needLoadController;
- (void)reloadControllerCellWithModuleCellCount:(long long)a0;
- (void)homePageRemotePanelDidDismissWithReason:(long long)a0;

@end
