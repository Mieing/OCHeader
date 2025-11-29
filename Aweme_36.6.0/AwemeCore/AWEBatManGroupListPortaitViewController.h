@class AWEPanelTransitionController, NSArray, NSString, UITableView;

@interface AWEBatManGroupListPortaitViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, BtnClickDelegate>

@property (retain, nonatomic) NSArray *groupList;
@property (retain, nonatomic) AWEPanelTransitionController *transitionController;
@property (retain, nonatomic) NSString *gameName;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)addRoundedCorner;
- (void)onBtnClickListener:(int)a0;
- (id)initWithGroupListData:(id)a0 andWithGameName:(id)a1 andWithClickListener:(id /* block */)a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
