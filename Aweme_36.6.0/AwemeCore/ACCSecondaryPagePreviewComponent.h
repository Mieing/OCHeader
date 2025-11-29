@protocol ACCSecondaryPageInputData, ACCEditServiceProtocol, ACCSequencePlayControlServiceProtocol;

@interface ACCSecondaryPagePreviewComponent : ACCSecondaryPageComponent

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> playService;
@property (weak, nonatomic) id<ACCSecondaryPageInputData> secondaryPageInputData;
@property (nonatomic) float volume;

- (void)componentDidAppear;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)config;
- (void).cxx_destruct;
- (void)setupPlayer;

@end
