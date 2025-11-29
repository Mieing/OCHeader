@interface UTDConfCenter : UTDOnlineConfBusiness

- (void)onPreLoad:(id)a0 confContent:(id)a1;
- (void)onArrived:(id)a0 confContent:(id)a1;
- (void)onNoConfArrived:(id)a0;
- (id)requiredConfNameList;
- (id)requiredConfName;

@end
