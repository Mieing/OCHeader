@class UIButton, AWECollegeInfoDataController, NSArray, NSString, UIView, UITableView;

@interface AWESelectCollegeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWECollegeInfoDataController *collegeInfoDataController;
@property (copy, nonatomic) NSArray *collegeArray;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIButton *notFoundBtn;
@property (copy, nonatomic) NSString *schoolName;
@property (copy, nonatomic) id /* block */ selectCollegeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (id)p_rotationAnimation;
- (void)setStatusBarBackgroundColor:(id)a0;
- (void)backButtonClicked;
- (void)p_setUpUI;
- (void)fetchCollegeList;
- (void)p_setNavigationHeader;
- (void)notFoundBtnClicked;
- (void)p_configTableView:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
