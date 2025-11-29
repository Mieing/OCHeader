@class AWEMaskWindow, NSString, NSDictionary, AWEAwemeDetailEcommerceKolVideoView;

@interface AWEAwemeECommerceDetailKolVideoController : AWEAwemeNewDetailBaseController <AWEMaskWindowGestureRecognizerDelegate, AWEAwemeDetailEcommerceKolVideoViewDelegate>

@property (retain, nonatomic) AWEAwemeDetailEcommerceKolVideoView *kolView;
@property (weak, nonatomic) AWEMaskWindow *maskWindow;
@property (retain, nonatomic) NSDictionary *productDetailBaseParams;
@property (nonatomic) BOOL hasContinuePlay;
@property (nonatomic) double firstVideoPlayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)viewDidLoadAfterTableviewSetup;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)handleMaskWindowDelegate;
- (BOOL)windowGestureRecognizerShouldBegin:(id)a0;
- (void)didEndDisplayCell;
- (void)collectionLoadMore:(id /* block */)a0;
- (void)didSelectIndex:(long long)a0;
- (void)didTapFold;
- (void)didTapBottomBar;
- (void)changeKolViewShowStatus:(BOOL)a0;
- (void)updateUIWhenKolViewShow:(BOOL)a0;
- (void)handleKolViewShow:(BOOL)a0 cell:(id)a1;
- (void)trackKolViewUnFold;
- (void)trackKolViewFold;
- (void)trackKolViewShow;
- (void).cxx_destruct;
- (void)play;
- (id)init;
- (void)addObserver;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
