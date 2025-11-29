@class NSObject, AFDButton, NSDate, NSString, UILabel, UIView, UITableView;
@protocol AWEUserRecommendTableViewModelProtocol, AWEFamiliarAlertPopupViewControllerDelegate;

@interface AWEFamiliarAlertPopupViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserRecommendTableViewModelDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AFDButton *infoButton;
@property (retain, nonatomic) AFDButton *closeButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *emptyView;
@property (nonatomic) long long initialNumberOfCells;
@property (retain, nonatomic) NSObject<AWEUserRecommendTableViewModelProtocol> *viewModel;
@property (retain, nonatomic) NSDate *showDate;
@property (weak, nonatomic) id<AWEFamiliarAlertPopupViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL hasHandled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)loadmore;
- (void)viewModel:(id)a0 didRemoveModelsAtIndexes:(id)a1;
- (void)viewModel:(id)a0 didUpdateModelsAtIndexes:(id)a1;
- (id)p_cellAtIndex:(long long)a0;
- (void)p_addEmptyView;
- (void)checkNeedLoadmore:(long long)a0;
- (void)trackPopupViewNotify:(id)a0 params:(id)a1;
- (void)dismissWithType:(long long)a0 completion:(id /* block */)a1;
- (void)p_clickPrivacyButton;
- (void)p_clickCloseButton;
- (void)showOnViewController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)updateViewConstraints;
- (id)initWithViewModel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)shouldAutorotate;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;
- (id)itemForIndex:(long long)a0;

@end
