@class NSString, AWEListenFeedCollectionListViewModel, NSArray, AWEListenFeedCollectionListExceptionView, DUXLoadingParticleView, DUXButton, UITableView;
@protocol AWEListenFeedCollectionListViewControllerDelegate;

@interface AWEListenFeedCollectionListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEListenFeedCollectionListViewModelDelegate, AWEListenFeedCollectionListCellDelegate, AWEListenFeedCollectionListExceptionViewDelegate, AWEListenFeedPlayListViewControllerDelegate>

@property (retain, nonatomic) UITableView *allContentTableView;
@property (retain, nonatomic) UITableView *notFinishContentTableView;
@property (retain, nonatomic) AWEListenFeedCollectionListExceptionView *exceptionView;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) AWEListenFeedCollectionListViewModel *viewModel;
@property (weak, nonatomic) UITableView *currentTableView;
@property (weak, nonatomic) NSArray *currentCellModels;
@property (retain, nonatomic) DUXButton *allContentChooseBtn;
@property (retain, nonatomic) DUXButton *notFinishChooseBtn;
@property (weak, nonatomic) id<AWEListenFeedCollectionListViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long currentListType;
@property (copy, nonatomic) id /* block */ didSelectTabType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousScrollViewArray;
- (void)bindViewModel;
- (void)collectionListCell:(id)a0 onClickAddListenLaterBtn:(id)a1;
- (void)exceptionNetWorkOnClickRetryBtn;
- (void)exceptionNoneLoginOnClickLoginBtn;
- (void)p_fetchData;
- (void)p_showLoginException;
- (void)updateBtn:(id)a0 bySelectState:(BOOL)a1;
- (void)p_updateBtnAccessibilityLabel;
- (void)p_onClickUnFinishBtn;
- (void)p_onClickAllContentBtn;
- (void)playlist:(id)a0 didDeleteItem:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)reloadDataIfNeeded;
- (void)setupUI;

@end
