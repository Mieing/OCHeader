@class NSDictionary, AWESettingPageBadgeManager, NSString;

@interface AWESettingPageManager : NSObject <AWESettingPageBadgeManagerDelegate>

@property (copy, nonatomic) NSDictionary *controllerMap;
@property (retain, nonatomic) AWESettingPageBadgeManager *badgeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didOpenSideBar;
- (void)didCloseSideBar;
- (void)registerBadgeControlDelegate:(id)a0;
- (void)didClickSettingPage;
- (void)didCreateSettingPage;
- (void)badgeManager:(id)a0 exposeBadgeWithBusinessID:(id)a1;
- (void)badgeManager:(id)a0 hideBadgeWithReason:(long long)a1 businessID:(id)a2;
- (void)p_forEachControllerPerformBlock:(id /* block */)a0;
- (void)p_loadBadgeManager;
- (void)p_loadController;
- (id)p_registerMap;
- (void)p_forEachController:(id)a0 performBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
