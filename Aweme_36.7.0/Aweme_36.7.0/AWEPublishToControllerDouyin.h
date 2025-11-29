@class UITableView, UIButton, NSString, UIView, UILabel, AWEPublishToControllCell;

@interface AWEPublishToControllerDouyin : AWEPublishPrivacyTransitionViewController <UITableViewDelegate, UITableViewDataSource, AWEPublishToControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEPublishToControllCell *selfCell;
@property (retain, nonatomic) AWEPublishToControllCell *anchorCell;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long selectedType;
@property (copy, nonatomic) id /* block */ selectBlock;

- (void)addSubviews;
- (void)closeButtonClicked:(id)a0;
- (id)animationViewInTransition;
- (double)offsetYInTransition;
- (BOOL)needInteractiveTransition;
- (id)p_commonCells;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (id)maskColor;

@end
