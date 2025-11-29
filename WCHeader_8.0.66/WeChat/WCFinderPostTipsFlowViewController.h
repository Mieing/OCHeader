@class WCFinderStreamProfilePostTipsFeedFlowViewModel, NSString, UILabel, WCFinderFeedFlowView, UIButton;

@interface WCFinderPostTipsFlowViewController : MMPageSheetBaseViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewDataSource, WCFinderStreamProfilePostTipsFeedFlowViewModelDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderStreamProfilePostTipsFeedFlowViewModel *viewModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) UIButton *postButton;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (nonatomic) unsigned long long enterTimeMS;
@property (copy, nonatomic) id /* block */ clickPostButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPostTipsInfo:(id)a0;
- (double)pageSheetContentHeight;
- (void)viewDidLoad;
- (void)setupData;
- (void)setupPageSheetConfig;
- (void)setupSubView;
- (int)commentScene;
- (unsigned long long)getCurrentViewState;
- (id)genReportDict;
- (void)onClickPostButton;
- (long long)finderFeedFlowView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)finderFeedFlowView:(id)a0 contentVMAtIndexPath:(id)a1;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (id)finderFeedFlowView:(id)a0 cellConfigAtIndexPath:(id)a1;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)streamProfilePostTipsVMDataDidChange;
- (int)streamProfilePostTipsVMGetCommentScene;
- (void).cxx_destruct;

@end
