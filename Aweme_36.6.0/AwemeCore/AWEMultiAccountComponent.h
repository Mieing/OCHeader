@interface AWEMultiAccountComponent : AWEUserHomeBaseComponent

@property (nonatomic) BOOL hasClickedMultiAccountNoticeUnreadDotView;
@property (nonatomic) BOOL isHomePageAppear;
@property (nonatomic) BOOL needRetryWhenAppear;

- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)handleClickedMultiAccountNoticesHasClickedUnreadDotViewAction;
- (BOOL)isCurrentAppidForbidden;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)onInit;

@end
