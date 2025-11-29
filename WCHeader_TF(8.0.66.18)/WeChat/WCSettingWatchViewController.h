@class MMTableViewInfo;

@interface WCSettingWatchViewController : MMUIViewController {
    MMTableViewInfo *_mainTableViewInfo;
}

- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)a0;
- (void)initUI;
- (void)reloadData;
- (id)makeTableHeaderView;
- (void)showTipsViewAction;
- (void)showQuickRepliesViewAction;
- (void)showCodePayManageViewAction;
- (void).cxx_destruct;

@end
