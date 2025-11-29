@interface AWEHPChannelReportNetworkManager : NSObject

+ (id)p_getMoreTabsWithAvailableTabs:(id)a0 showTabs:(id)a1;
+ (void)reportTabsWithTraceInfo:(id)a0 reloadType:(id)a1 isRendered:(BOOL)a2 bottomTabs:(id)a3 showTopTabs:(id)a4 availableTabs:(id)a5 completion:(id /* block */)a6;

@end
