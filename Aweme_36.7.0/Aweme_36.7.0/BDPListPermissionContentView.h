@class NSString, NSArray, UILabel, UITableView;

@interface BDPListPermissionContentView : UIView <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    NSArray *_scopeList;
}

@property (nonatomic) double tableviewHeight;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ didUpdateSelectedScopesCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedScopes;
- (void)setupBigTitleLabel;
- (id)initWithScopeDescriptions:(id)a0 height:(double)a1;
- (id)selectedScopesString;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)setupUI;
- (void)setupTableView;

@end
