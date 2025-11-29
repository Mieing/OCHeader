@interface BDPSubscribePermissionAlertControllerLogic : NSObject

+ (BOOL)shouldShowPushNoficiationTips:(id)a0 allTemplateList:(id)a1;
+ (void)showPushNotificationTips:(id)a0 uniqueID:(id)a1 completeBlock:(id /* block */)a2;

- (void)showSubscribePermissionAlertController:(id)a0 templateInfoList:(id)a1 templateTimesType:(unsigned long long)a2 uniqueID:(id)a3 completion:(id /* block */)a4;
- (id)getFeedCardViewWithFeedCardShowStatus:(unsigned long long)a0 uniqueID:(id)a1;
- (id)getFooterView:(id)a0 timesType:(unsigned long long)a1 uniqueID:(id)a2;

@end
