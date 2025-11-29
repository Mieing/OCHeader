@class UIButton, NSArray, WCFinderMsgChangeRoleViewItem, NSString, UIView, UITableView;

@interface WCFinderMsgChangeRoleView : WCFinderCustomPanelSheet <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *cellViewModel;
@property (retain, nonatomic) UIView *roleContainerView;
@property (retain, nonatomic) WCFinderMsgChangeRoleViewItem *selectedItem;
@property (retain, nonatomic) UIButton *changeButton;
@property (nonatomic) long long currentSelectRoleType;
@property (copy, nonatomic) id /* block */ changeSuccessfulBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgRoleType:(int)a0;
- (id)loadContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (void)reloadData;
- (void)changeRoleAction;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
