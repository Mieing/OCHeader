@class NSMutableArray, NSString, NSArray, UIView, UILabel, UITableView;

@interface BDPGameListSubscribeContentView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *infoContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *templateTitleList;
@property (retain, nonatomic) NSMutableArray *statusList;
@property (copy, nonatomic) NSArray *templateInfoList;
@property (copy, nonatomic) id /* block */ didUpdateSelectedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupStatusList;
- (void)setupInfoContainer;
- (double)tableViewMaxHeight;
- (id)selectedIndexArr;
- (void)updateStatusList:(BOOL)a0 forIndex:(long long)a1;
- (id)initWithTitle:(id)a0 templateTitleList:(id)a1 templateInfoList:(id)a2;
- (id)selectedTemplateIDArr;
- (id)unselectedIndexArr;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;
- (void)setupTableView;
- (void)setupTitleLabel;

@end
