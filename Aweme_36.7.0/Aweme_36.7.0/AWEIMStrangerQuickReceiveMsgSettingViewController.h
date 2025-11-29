@class AWEIMStrangerQuickReceiveMsgViewModel, AWEIMStrangerQuickManager, NSString, UILabel, UITableView;

@interface AWEIMStrangerQuickReceiveMsgSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) AWEIMStrangerQuickManager *manager;
@property (weak, nonatomic) AWEIMStrangerQuickReceiveMsgViewModel *currentSelectedViewModel;
@property (copy, nonatomic) id /* block */ selectedItemBlock;
@property (copy, nonatomic) id /* block */ closePanelBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_updateUI;
- (void)p_trackPanelShow;
- (void)p_setUpUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithManager:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
