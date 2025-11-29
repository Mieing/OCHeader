@protocol ACCEditorOneClickFilmListFetchService, ACCEditViewContainer, IESServiceProvider, ACCCTRServiceProtocol, ACCEditorOneClickFilmingSideSlipPanelServiceProtocol;

@interface AWEStoryEditSparkBackgroundComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditorOneClickFilmListFetchService> oneClickFilmFetchListService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingSideSlipPanelServiceProtocol> oneClickFilmSideSlipPanelService;
@property (retain, nonatomic) id<IESServiceProvider> sideslipServiceProvider;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;

- (void)componentDidAppear;
- (id)barItem;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)barItemActionOnView:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
