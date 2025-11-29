@class AWEDynamicPatchModel, AWESearchArticleDetailPageContext, AWESearchArticleContentDetailViewModel, AWEBinding, DUXLoadingParticleView, NSString, AWESearchDynamicEngine;

@interface AWESearchArticleContentDetailViewController : UIViewController <AWESearchDynamicEngineDelegate, AWETabListHeaderViewControllerProtocol>

@property (retain, nonatomic) AWESearchDynamicEngine *lynxEngine;
@property (retain, nonatomic) AWEDynamicPatchModel *patchModel;
@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) AWESearchArticleContentDetailViewModel *viewModel;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) AWEBinding *binding;
@property (nonatomic) BOOL didRenderFirstScreen;
@property (nonatomic) BOOL firstTimeAppeared;
@property (nonatomic) double maxContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithHeaderModel:(id)a0;
- (void)startTick;
- (void)setupObserver;
- (void)trackStayTime;
- (void)lynxEngineDidMount:(id)a0;
- (void)lynxEngineDidUpdate:(id)a0;
- (void)lynxEngine:(id)a0 didFailLoadWithError:(id)a1;
- (void)lynxEngine:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)lynxEngine:(id)a0 didRecieveError:(id)a1;
- (void)lynxEngine:(id)a0 didFailDownloadWithError:(id)a1;
- (void)bindPageContext:(id)a0;
- (void)updateLynxPatchModel;
- (id)articleCustomGlobalProps;
- (void)onTabListContainerScrollViewDidScroll:(id)a0;
- (void)onTabListContaienrScrollViewWillBeginDragging:(id)a0;
- (void)onTabListContainerScrollViewDidEndScrolling:(id)a0;
- (void)onTabListContainerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)sendWindowResizeEvent;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (double)heightForHeaderView;

@end
