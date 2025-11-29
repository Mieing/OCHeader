@interface UTDAppMonitorBusiness : UTDOnlineConfBusiness

- (void)updateConfigDic:(id)a0 content:(id)a1;
- (void)onPreLoad:(id)a0 confContent:(id)a1;
- (void)onArrived:(id)a0 confContent:(id)a1;
- (void)onNoConfArrived:(id)a0;
- (id)requiredConfNameList;
- (id)requiredConfName;

@end
