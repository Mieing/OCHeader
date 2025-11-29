@class NSString, BDPPermissionTableViewController, BDPUniqueID, NSMutableArray;

@interface BDPLifeServiceManageViewController : BDPBusinessXScreenViewController <UITableViewDelegate, UITableViewDataSource> {
    NSMutableArray *_lifeScopeGroups;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) BDPPermissionTableViewController *tableViewController;
@property (readonly, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUniqueID:(id)a0 subPageDict:(id)a1;
- (void)openSwitchClicked:(id)a0;
- (void)trackLifeServicePageShowWithUniqueId:(id)a0;
- (id)indexPathWithTag:(long long)a0;
- (void)trackLifeServiceScopeButtonClickWithUniqueId:(id)a0 scopeType:(id)a1 actionType:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateNavigationTitle;

@end
