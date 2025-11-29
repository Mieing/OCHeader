@class IESLiveRevenueInteractVoteThemeViewModel, NSString, IESLiveTableViewCellDisplayTrackHelper, UITableView;
@protocol IESLiveSubscription;

@interface IESLiveRevenueInteractVoteThemeChooseViewController : IESLiveRevenueInteractPopupViewController <UITableViewDataSource, UITableViewDelegate, IESLiveTableViewCellDisplayTrackHelperDelegate>

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) IESLiveRevenueInteractVoteThemeViewModel *viewModel;
@property (retain, nonatomic) UITableView *themeTableView;
@property (retain, nonatomic) IESLiveTableViewCellDisplayTrackHelper *trackHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)onSetupNavBar:(id)a0;
- (BOOL)trackDisplayedCellWithIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)setupData;

@end
