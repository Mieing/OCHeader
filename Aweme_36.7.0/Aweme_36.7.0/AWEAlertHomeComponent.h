@interface AWEAlertHomeComponent : AWEUserHomeBaseComponent

@property (nonatomic) BOOL isFirstTimeViewDidAppear;
@property (nonatomic) BOOL isUserBannedAlertShowing;

- (void)p_showUserBannedAlert:(id)a0;
- (void)addAlertsForShowEvent;
- (void)onEnterHomePageTab;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)viewDidAppear;
- (void)onInit;

@end
