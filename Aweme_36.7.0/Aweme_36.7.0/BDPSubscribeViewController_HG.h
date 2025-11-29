@class BDPSubscribe_HG, NSMutableDictionary, NSString, NSMutableArray, BDPUniqueID, UITableView;

@interface BDPSubscribeViewController_HG : BDPViewController <UITableViewDelegate, UITableViewDataSource, BDPGameSubscribeTableViewCellDelegate> {
    NSMutableArray *_subscribeGroups;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableDictionary *allTemplateInfoDict;
@property (weak, nonatomic) BDPSubscribe_HG *subs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexPathWithTag:(long long)a0;
- (void)cellDidClickSwitch:(id)a0 switchView:(id)a1;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)shouldAutorotate;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setupDataSource;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupView;
- (id)initWithUniqueID:(id)a0;
- (void)updateNavigationTitle;

@end
