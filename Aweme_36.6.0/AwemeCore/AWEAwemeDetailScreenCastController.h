@class NSString;

@interface AWEAwemeDetailScreenCastController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, AWEScreenCastFloatingViewServiceDelegate, AWEScreenCastVideoDelegate, AWEScreenCastPendantDataProvider>

@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isCellAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)didReloadData;
- (id)curSceneString;
- (id)floatingViewService;
- (id)pendantService;
- (void)getInnerListArgsWith:(id /* block */)a0;
- (void)enterInnerListWithUpdateScreenCastDatas:(BOOL)a0;
- (void)setupContextHandler;
- (void)updateScreenCastModels;
- (void)castPlayVideoDidChange:(id)a0;
- (id)screenCastCurReferString;
- (void)castPlayVideoDidChangeFromModel:(id)a0 toModel:(id)a1;
- (BOOL)isCurrentCellScreenCasting;
- (long long)screenCastFloatingViewShowType;
- (void)screenCastFloatingViewDidClicked:(id)a0;
- (double)maxYForScreenCastFloatingViewPosition:(long long)a0;
- (id)screenCastFloatingViewCurrentAwemeModel;
- (void)addScreenCastFloatingView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
