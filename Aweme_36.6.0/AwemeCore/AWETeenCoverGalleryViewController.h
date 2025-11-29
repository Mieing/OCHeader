@class NSArray, NSString, UITableView;

@interface AWETeenCoverGalleryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *coverImageArray;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)configNavigationBar;
- (long long)isContainedInCoverGallery;
- (void)selectCoverWithIndex:(long long)a0;
- (void)selectCoverWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)checkState;
- (void)viewDidLoad;
- (void)setupUI;
- (void)refreshData;

@end
