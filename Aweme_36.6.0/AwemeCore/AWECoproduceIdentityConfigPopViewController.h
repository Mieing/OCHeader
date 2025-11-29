@class NSIndexPath, UIView, NSArray, NSString, DUXNavigationBar, UIImageView, AWEPublishCoCreatorSettingsRoleModel, UITableView, NSDictionary, AWECoproduceIdentityFooterView, UILabel;

@interface AWECoproduceIdentityConfigPopViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSIndexPath *selectedIndex;
@property (retain, nonatomic) UIImageView *infoIconImageView;
@property (nonatomic) BOOL isFullPageStyle;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (retain, nonatomic) AWECoproduceIdentityFooterView *footer;
@property (retain, nonatomic) AWEPublishCoCreatorSettingsRoleModel *currentSelectRole;
@property (copy, nonatomic) NSArray *coProduceRoles;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ identifyChangeTappedBlock;
@property (copy, nonatomic) id /* block */ canChangeRoleBlock;
@property (copy, nonatomic) NSDictionary *coProducerRolesCurrentDict;
@property (copy, nonatomic) id /* block */ addCoProduceBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickInfoIcon;
- (void)setUI;
- (void)configFullPageView;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
