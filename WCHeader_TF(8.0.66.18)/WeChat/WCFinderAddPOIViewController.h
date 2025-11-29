@class UIView, NSString, MMPickLocationViewController, WCFinderArrowTipsView, UIImageView, UIButton, UITableView, NSMutableSet, WCFinderRefreshTableFooterView, WCFinderAddPOIViewModel, UILabel, MMUIButton;
@protocol WCFinderAddPOIViewControllerDelegate;

@interface WCFinderAddPOIViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderAddPOIViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, MMPickLocationViewControllerDelegate>

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) WCFinderAddPOIViewModel *viewModel;
@property (retain, nonatomic) NSMutableSet *selectedRows;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *placeHolderLabel;
@property (retain, nonatomic) UILabel *relatedLabel;
@property (retain, nonatomic) MMUIButton *infoImageView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) UIView *blankView;
@property (retain, nonatomic) UIButton *selectButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) MMPickLocationViewController *pickLocationViewController;
@property (retain, nonatomic) WCFinderArrowTipsView *tipsView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (weak, nonatomic) id<WCFinderAddPOIViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)initViews;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)tapBackButton;
- (void)showTipsBubble;
- (void)showPickLocationVC;
- (void)tapSelectAll;
- (void)updateSelectAllButton;
- (void)updateDoneButton;
- (void)updateEmptyState;
- (void)tapDone;
- (void)bindSelectedPOI;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)onGetRightBarButton;
- (void)onTapAddButton;
- (void)onCancelSeletctedLocation;
- (void)onRelativePOIListChange;
- (void)onRelativePOIListNoMore;
- (void)onRelativePOIListError;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
