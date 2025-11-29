@class WCFinderMaskButton, NSString, WCFinderStreamProfileDragBarView, UIView, UILabel, WCFinderFeedFlowView, WCFinderMemberShipPreviewListViewModel;
@protocol WCFinderMemberShipIntroducePreviewListViewControllerDelegate;

@interface WCFinderMemberShipIntroducePreviewListViewController : MMUIHalfScreenViewController <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderMemberShipPreviewListViewModelDelegate, WCFinderStreamProfileDragBarViewDelegate>

@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long feedPageType;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) WCFinderMemberShipPreviewListViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) WCFinderMaskButton *confirmButton;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *subTitleStr;
@property (nonatomic) unsigned long long entranceSource;
@property (retain, nonatomic) WCFinderStreamProfileDragBarView *dragBarView;
@property (retain, nonatomic) UIView *topViewContainer;
@property (weak, nonatomic) id<WCFinderMemberShipIntroducePreviewListViewControllerDelegate> previewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0 feedPageType:(unsigned long long)a1 entranceSource:(unsigned long long)a2 titleStr:(id)a3 subTitleStr:(id)a4 lastBuffer:(id)a5 collectionTopicId:(unsigned long long)a6;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupSubviews;
- (void)bindPageReport;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)finderFeedFlowView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)finderMemberShipPreviewListViewNoMoreData;
- (void)finderMemberShipPreviewListViewFetchListSuc;
- (void)finderMemberShipPreviewListViewFetchListFail;
- (double)getMaxHalfScreenHeight;
- (void)onClickConfirm;
- (void)dragBarViewWillBegin:(id)a0;
- (void)dragBarViewDidEnd:(id)a0 slideToClose:(BOOL)a1;
- (double)dragBarViewExpandMinHeight:(id)a0;
- (double)dragBarViewExpandMaxHeight:(id)a0;
- (void).cxx_destruct;

@end
