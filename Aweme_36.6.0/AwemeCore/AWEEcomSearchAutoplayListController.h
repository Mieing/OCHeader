@class AWESearchGeneralDCAutoPlayCalculator, NSMutableDictionary, AWEMSearchAutoPlayController;

@interface AWEEcomSearchAutoplayListController : AWEEcomSearchListBaseController <AWEEcomSearchListAutoPlayProtocol>

@property (retain, nonatomic) AWEMSearchAutoPlayController *autoPlayController;
@property (retain, nonatomic) AWESearchGeneralDCAutoPlayCalculator *doubleColumnAutoPlayCalculator;
@property (retain, nonatomic) NSMutableDictionary *autoPlayCardMap;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL shouldAutoPlayVideo;

- (void)willEnterFullScreen:(id)a0;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)forceBecomeActive:(id)a0;
- (id)modelOfIndexPath:(id)a0;
- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2;
- (id)currentAutoPlayConfig;
- (void)p_endAutoPlay;
- (void)p_beginAutoPlayWithReset:(BOOL)a0;
- (void)p_holdAutoPlayForReload;
- (void)p_holdAutoPlayForReloadWithNeedPerformBatchUpdates:(BOOL)a0 performBatchUpdates:(id /* block */)a1 updatesCompletion:(id /* block */)a2;
- (id)p_createAutoPlayCardModelWithIndexPath:(id)a0 cell:(id)a1;
- (id)disableAutoPlayOnScroll;
- (id)autoPlayDelayTime;
- (void)p_beginAutoPlayWithReset:(BOOL)a0 card:(id)a1 markActive:(BOOL)a2;
- (id)userWindowCell;
- (id)adSearchVideoView;
- (BOOL)shouldAutoPlayUserWindowLive;
- (BOOL)shouldShowAdSearchVideoView;
- (double)userWindowDisplayRatio;
- (double)searchAdCellDisplayRatio;
- (void)viewDidAppear;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (id)bottomContainerView;
- (unsigned long long)columnType;
- (id)srp;
- (void)viewWillDisappear;

@end
