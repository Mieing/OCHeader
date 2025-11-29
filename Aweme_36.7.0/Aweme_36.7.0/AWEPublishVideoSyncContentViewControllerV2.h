@class UIView, NSString, UIImageView, NSDictionary, AWEPublishVideoSyncModel_V2, DUXSwitch, UITableView, UILabel;

@interface AWEPublishVideoSyncContentViewControllerV2 : AWEPublishHalfScreenContentViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *tipImage;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UITableView *settingsTableView;
@property (retain, nonatomic) UIView *rememberView;
@property (retain, nonatomic) UILabel *rememberLabel;
@property (retain, nonatomic) DUXSwitch *rememberSwitch;
@property (nonatomic) double contentAreaHeight;
@property (nonatomic) double descLabelHeight;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWEPublishVideoSyncModel_V2 *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noticeButtonTapped:(id)a0;
- (void)rememberSwitched:(BOOL)a0;
- (double)contentHeight;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpUI;

@end
