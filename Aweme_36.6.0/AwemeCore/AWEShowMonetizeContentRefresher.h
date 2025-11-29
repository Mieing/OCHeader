@interface AWEShowMonetizeContentRefresher : AWEShowMonetizeCommonRefresher

- (void)refreshMonetizeContentWithInfo:(id)a0;
- (void)handleVeryHighPriorityMonetizeDataWithInfo:(id)a0 awemes:(id)a1 error:(id)a2 logID:(id)a3;
- (void)requestNormalPriorityMonetizeData:(id)a0 refreshedMonetizeData:(id)a1;
- (void)handleNormalMonetizeDataWithInfo:(id)a0 awemes:(id)a1;
- (void)handleNormalMonetizeDataWithInfo:(id)a0 awemes:(id)a1 forMonetizeSceneContainers:(id)a2;

@end
