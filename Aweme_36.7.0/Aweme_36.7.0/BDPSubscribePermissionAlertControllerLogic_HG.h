@interface BDPSubscribePermissionAlertControllerLogic_HG : NSObject

- (void)showSubscribePermissionAlertController:(id)a0 templateInfoList:(id)a1 templateTimesType:(unsigned long long)a2 uniqueID:(id)a3 completion:(id /* block */)a4;
- (id)getFooterView:(id)a0 timesType:(unsigned long long)a1;
- (id)getContentView:(id)a0 templateInfoList:(id)a1;
- (id)getEventExtra:(id)a0 isLongTerm:(BOOL)a1;

@end
