@class NSString, UIView, NSObject, UITableView;
@protocol AWEFriendsContactCardViewProtocol, AWEUserRecommendTableViewManagerProtocol, AWEUserRecommendTableSectionProviderProtocol;

@interface AWEFollowEmptyHintViewController : UIViewController <AWEUserMessage, AWEUserRecommendTableViewManagerDataSource, UITableViewDataSource, UITableViewDelegate, AWEFollowEmptyHintViewControllerProtocol, AWEFriendsContactCommonViewDelegate>

@property (retain, nonatomic) UITableView *recommendTableView;
@property (retain, nonatomic) NSObject<AWEUserRecommendTableViewManagerProtocol> *recommendManager;
@property (retain, nonatomic) UIView<AWEFriendsContactCardViewProtocol> *contactCardView;
@property (nonatomic) BOOL shouldRefreshFollowNum;
@property (readonly) id<AWEUserRecommendTableSectionProviderProtocol> recommendSectionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL canEmptyRefresh;

+ (Class)aAWEConcernMutiTargetConfigCommonAdapterClass;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)aAWEConcernMutiTargetConfigCommonAdapter;
- (void)updateEmptyViewText:(id)a0;
- (void)updateRecommendHint:(BOOL)a0;
- (void)refreshEmptyPageWithAddressBookAuthorized:(BOOL)a0;
- (void)updateRecommendUsers:(BOOL)a0;
- (id)emptyViewTitleLabelText;
- (BOOL)shouldShowGuideEntryAfterCheckBDCert;
- (void)updateUploadAddressBookHint:(BOOL)a0;
- (void)commonViewButtonDidClicked;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
