@class NSArray, NSMutableDictionary, AWEShowAdInsertBaseConfig, NSString;
@protocol AWEShowPlayletAdInsertProtocol;

@interface AWEAwemeDetailPlayletInnerBaseInsetAdViewController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, AWEShowPlayletAdInsertHandler>

@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSArray *progressPoints;
@property (retain, nonatomic) NSMutableDictionary *progressState;
@property (nonatomic) long long lastReqSeriesIdx;
@property (nonatomic) long long lastAdReqTime;
@property (retain, nonatomic) AWEShowAdInsertBaseConfig *adInsertConfig;
@property (retain, nonatomic) id<AWEShowPlayletAdInsertProtocol> playletAdInsertControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (id)seriesExtraParams;
- (id)showPlayletADContainerModel;
- (id)showPlayletADContainerDataSource;
- (id)showPlayletClientSideParamsJsonString;
- (id)seriesExtraParamsJsonString;
- (void)requestFinishedUpdateReqInfo;
- (id)showPlayletADContainerTableViewController;
- (long long)showPlayletADTableViewPlayIndex;
- (id)createUniqueKey;
- (void)trackWithName:(id)a0 params:(id)a1;
- (id)requestCustomParams;
- (BOOL)enableAdInsertRebuild;
- (void)startFrisbeeAdIfNeedWithPlayerPlayTime:(double)a0 totalTime:(double)a1;
- (void)requestFrisbee:(id)a0;
- (BOOL)checkShouldRequestForFrisbee:(id)a0;
- (id)trafficInvestParamJsonString;
- (void)requestAlgorithmPackage;
- (void)requestComplicationWithFrisbee:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)clientParams;

@end
