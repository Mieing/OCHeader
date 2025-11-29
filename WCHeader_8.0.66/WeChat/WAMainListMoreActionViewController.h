@class MMTableViewInfo;

@interface WAMainListMoreActionViewController : MMUIViewController {
    MMTableViewInfo *m_tableViewInfo;
}

- (void)viewDidLoad;
- (void)initTableViewInfo;
- (void)reloadTableViewInfo;
- (void)openOverallAuthListPage;
- (void)openThirdAppRunAuthSimulatedNative;
- (void)openRunningTaskPage;
- (void).cxx_destruct;

@end
