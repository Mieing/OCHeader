@class NSNumber, NSString, DitoPageContext, AWEPOIUGCRatePageContext, AWEPOILoadingView, AWEPOIUGCRateScoreNavigationBarBizModel;
@protocol DitoExtensionContainerProtocol;

@interface AWEPOIUGCRateExtension : NSObject <DitoGeneralContainerTrackParamsDataSourceProtocol, AWEDitoGeneralContainerExtensionManagerExtraProtocol, DitoGeneralLynxContainerBusinessExtender, DitoExtensionProtocol>

@property (readonly, nonatomic) AWEPOIUGCRatePageContext *pageContext;
@property (retain, nonatomic) AWEPOILoadingView *loadingView;
@property (retain, nonatomic) AWEPOIUGCRateScoreNavigationBarBizModel *navBarBizModel;
@property (retain, nonatomic) NSNumber *navBarThresholdOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;

- (void)configWithRouterParamDict:(id)a0;
- (void)buildLoadingView;
- (void)resetLoadingView;
- (void)pageDidScroll:(id)a0;
- (void)didSendRequest;
- (void)didEndParseData:(id)a0 error:(id)a1;
- (void)didEndParseLoadMoreData:(id)a0 error:(id)a1;
- (void)didLoadPageModel:(id)a0;
- (void)didEndReload;
- (void)didEndRequestWithResponse:(id)a0 error:(id)a1;
- (void)initializeExtension;
- (id)constData;
- (void)ditoViewControllerDidTapEmptyPagePrimaryButton:(id)a0;
- (void)ditoViewControllerViewChangeToState:(unsigned long long)a0 withConfig:(id)a1;
- (void)updateLynxThreadStrategyForPageModel:(id)a0;
- (void)setupCubeModel:(id)a0;
- (id)extraParamsWithCubeModel:(id)a0 withContext:(id)a1;
- (void)bindBDXEvent:(id)a0;
- (void)setupStoreWithParams:(id)a0;
- (void)setupConstDataWithParams:(id)a0;
- (void)poiRateLynxLepusReady:(id)a0;
- (void)updateSloganTrackParams;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
