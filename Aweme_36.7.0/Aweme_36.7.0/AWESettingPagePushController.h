@interface AWESettingPagePushController : AWESettingPageBaseController

+ (BOOL)canShowRedDot;

- (void)enterForeGround:(id)a0;
- (void)pushSystemAlertDismiss;
- (void)setRedDotMethod:(id /* block */)a0;
- (void)didOpenSideBar;
- (void)didCloseSideBar;
- (void)badgeDidAppear;
- (void)badgeDidDisappear:(long long)a0;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
