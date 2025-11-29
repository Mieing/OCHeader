@class WCFinderRefuseLikeListModel, NSString, UITapGestureRecognizer, WCStoryDismissInteractiveTransition, UITableView, NSMutableArray, RichTextView, WCStoryFriendsCollectionDismissTransition, UILabel;
@protocol WCFinderRefuseLikeListViewControllerDelegate;

@interface WCFinderRefuseLikeListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefuseLikeListModelDelegate, MultiSelectContactsViewControllerDelegate, WCStoryDismissInteractiveTransitionDelegate>

@property (copy, nonatomic) NSString *objectId;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefuseLikeListModel *viewModel;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSMutableArray *deleteUsernameArray;
@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) WCStoryDismissInteractiveTransition *transition;
@property (retain, nonatomic) WCStoryFriendsCollectionDismissTransition *dismissAnimateTransition;
@property (weak, nonatomic) id<WCFinderRefuseLikeListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObjectId:(id)a0 commentScene:(int)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupNavBar;
- (id)getTitleViewText;
- (void)updateNavTitle;
- (void)configureRightButton;
- (void)clickRightAddButton;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturn:(id)a0;
- (void)onNavigationBackItemClick:(id)a0;
- (void)configureTableView;
- (void)stateRetryGestureAction:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)updateMenuItemCell:(id)a0 contact:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)finderRefuseLikeListFetchSuccess;
- (void)finderRefuseLikeListCGISuc;
- (void)finderRefuseLikeListFetchFailWithErrorCode:(int)a0;
- (void)onDismissInteractiveTransitionBegin:(id)a0;
- (void).cxx_destruct;

@end
