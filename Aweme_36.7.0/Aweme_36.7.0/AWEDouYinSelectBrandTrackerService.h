@class NSString;

@interface AWEDouYinSelectBrandTrackerService : HTSService <AWEDouYinSelectBrandTrackerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commentInputViewDidHide:(id)a0;
- (void)commentInputViewDidShow:(id)a0;
- (BOOL)enableDouyinSelectBrandTracker;
- (BOOL)enableDouyinSelectBrandTrackerForUGBottomBar;
- (void)trackDouyinSelectBrandShow:(long long)a0 referString:(id)a1;
- (void)trackDouyinSelectBrandShow:(long long)a0 referString:(id)a1 extraParams:(id)a2;
- (void)trackDouyinSelectBrandShowTime:(id)a0;
- (void)aFDRecommendPanelViewControllerDidAppear:(id)a0;
- (void)aFDRecommendPanelViewControllerDidLoad:(id)a0;
- (void)aFDRecommendPanelViewControllerDidDisappear:(id)a0;
- (void)aFDRecommendPanelLaunchJXAppDialogShow:(id)a0;
- (void)aFDRecommendPanelLaunchJXAppDialogDismiss:(id)a0;
- (id)createDouyinSelectBrandTrackerManager;
- (void)trackDouyinSelectBrandShow:(id)a0;
- (long long)getRecommendExplainPanelbrandType:(id)a0;
- (BOOL)enableDouyinSelectBrandTrackerForSearchTag;

@end
