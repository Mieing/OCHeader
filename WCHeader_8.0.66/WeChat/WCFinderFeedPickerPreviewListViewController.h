@class UIButton, WCFinderFeedPickerParams, NSString, UIView, WCFinderFeedListView, MMUIButton;
@protocol WCFinderFeedPickerPreviewListViewModelProtocol, WCFinderFeedPickerPreviewListViewControllerDelegate;

@interface WCFinderFeedPickerPreviewListViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderPickerListTableViewCellDelegate, WCFinderFeedListTransitionHelperBehavior>

@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) id<WCFinderFeedPickerPreviewListViewModelProtocol> viewModel;
@property (nonatomic) unsigned long long firstAppearFeedIndex;
@property (nonatomic) BOOL canScrollToFirstAppearIndex;
@property (copy, nonatomic) id /* block */ pushCustomVCBlock;
@property (retain, nonatomic) MMUIButton *doneBtn;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIButton *moreFeedTipsBtn;
@property (retain, nonatomic) WCFinderFeedPickerParams *params;
@property (weak, nonatomic) id<WCFinderFeedPickerPreviewListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPickerTabModel:(id)a0 selectedIndex:(unsigned long long)a1 pushCustomVCBlock:(id /* block */)a2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)setupSubViews;
- (BOOL)useTransparentNavibar;
- (void)scrollToIndex:(long long)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)onReturn:(id)a0;
- (void)onBack;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (long long)finderFeedListView:(id)a0 rowOfCustomViewAtSection:(long long)a1;
- (BOOL)finderFeedListView:(id)a0 customViewAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 customCellForRowAtIndexPath:(id)a1;
- (BOOL)isInSubScene;
- (double)finderFeedListView:(id)a0 heightForCustomRowAtIndexPath:(id)a1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (void)finderFeedListViewDidEndDecelerating:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (void)finderPickerListTableViewCellDidClickDesctiption:(id)a0 contentVM:(id)a1;
- (void)finderPickerListTableViewCellTriggerAntiAddictCheckLogic;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)transitionHelperFetchCurrentPlayTid;
- (void).cxx_destruct;

@end
