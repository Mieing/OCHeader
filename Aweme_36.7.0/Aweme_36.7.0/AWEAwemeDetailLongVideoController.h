@class NSString;

@interface AWEAwemeDetailLongVideoController : AWEAwemeNewDetailBaseController

@property (copy, nonatomic) NSString *lynxDomainForPDA;
@property (copy, nonatomic) NSString *lynxContainerIDForPDA;

- (void)configWithRouterParamDict:(id)a0;
- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (id)awemeModelWithIndexPath:(id)a0;
- (void)onPaySuccessAndChangeModelNotification:(id)a0;
- (void)onChangePlayVideoNotification:(id)a0;
- (void)replaceVideo:(id)a0 withModel:(id)a1 originModel:(id)a2;
- (id)currentLongVideoWatermarkView;
- (void)showLongVideoWatermarkWithNeedRelayout:(BOOL)a0;
- (void)jumpVideo:(id)a0 withModel:(id)a1 originModel:(id)a2;
- (void)updatePDAAwemeCacheWithPaidModel:(id)a0;
- (long long)findModelIndexWithDataSource:(id)a0 awemeId:(id)a1 model:(id)a2 originModel:(id)a3;
- (void)submitLongVideoHistory:(id)a0 progress:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)orientationChanged;

@end
