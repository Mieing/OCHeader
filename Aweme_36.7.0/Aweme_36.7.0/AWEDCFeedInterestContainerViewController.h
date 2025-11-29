@class AWEDCFeedTabListConfig, NSString, AWEDCFeedInterestModel, UIViewController;
@protocol AWEDCFeedTabListViewControllerProtocol;

@interface AWEDCFeedInterestContainerViewController : UIViewController <AWEDCFeedTabListViewControllerDelegate, AWEDCFeedInterestTransitionContextProvider>

@property (retain, nonatomic) AWEDCFeedInterestModel *interestModel;
@property (retain, nonatomic) UIViewController<AWEDCFeedTabListViewControllerProtocol> *dcFeedTabListVC;
@property (retain, nonatomic) AWEDCFeedTabListConfig *tabListConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (void)backButtonClicked;
- (void)setupNaviBar;
- (void)loadTabListConfig;
- (void)setupTabListVC;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)navigationTitle;
- (void)viewDidLoad;

@end
