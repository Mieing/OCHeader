@class AWEAddMateGuideBannerView, UIView, NSArray, DUXContentSheet, AWESocialRelationObserver, AWEPublishPrivacyMateListDataController, NSString, UITableView, DUXVacantView, DUXLoadingParticleView, UILabel;

@interface AWEPublishPrivacyMateListViewController : UIViewController <DUXSheetDelegate, UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEAddMateGuideBannerView *addMateGuideBannerView;
@property (retain, nonatomic) AWEPublishPrivacyMateListDataController *mateListDataController;
@property (retain, nonatomic) NSArray *mateList;
@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (retain, nonatomic) DUXVacantView *emptyView;
@property (retain, nonatomic) DUXVacantView *errorView;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (nonatomic) BOOL shouldShowAddMateGuideBanner;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)judgeAddMateGuideBannerVisible;
- (void)reloadDataWithSuccess:(BOOL)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)show;
- (void)setupUI;
- (void)setupLayout;

@end
