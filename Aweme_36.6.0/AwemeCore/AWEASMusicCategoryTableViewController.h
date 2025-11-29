@class ACCMusicUIThemeModel, NSString, AWEASSMusicNavView, ACCASMusicCategoryManager, UIView, UITableView;

@interface AWEASMusicCategoryTableViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource, HTSVideoAudioSupplier>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) ACCASMusicCategoryManager *manager;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (retain, nonatomic) AWEASSMusicNavView *navView;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) long long recordMode;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL disableCutMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ willClipBlock;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;

- (BOOL)configWithRouterParamDict:(id)a0;
- (double)viewTopOffset;
- (void)cancelBtnClicked:(id)a0;
- (void)dismissAllPages;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)refreshUI;
- (void)viewDidLoad;
- (void)loadData;
- (void)setupView;

@end
