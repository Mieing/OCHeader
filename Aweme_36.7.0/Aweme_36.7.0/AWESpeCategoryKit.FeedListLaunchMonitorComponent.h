@interface AWESpeCategoryKit.FeedListLaunchMonitorComponent : AWESpeCategoryKit.FeedListBaseComponent {
    void /* unknown type, empty encoding */ builded;
    void /* unknown type, empty encoding */ receivedStartMessage;
}

- (void)onContainerViewDidDisappear;
- (void)onContainerViewWillDisappear;
- (void)onContainerViewDidAppear;
- (void)onContainerViewDidLoad;
- (void)onFetchListDataStartWithReason:(long long)a0;
- (void)onFetchListDataEndWithReason:(long long)a0 success:(BOOL)a1 response:(id)a2 error:(id)a3;
- (void)onListDidReloadData;
- (id)init;

@end
