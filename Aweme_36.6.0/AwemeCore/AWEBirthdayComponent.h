@class UIView;
@protocol ACCSequenceEditServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCLoadingViewProtocol, AFDBirthdayPanelProtocol, ACCEditServiceProtocol;

@interface AWEBirthdayComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControlService;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView<AFDBirthdayPanelProtocol> *actionPanel;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)onChangePicTapped;
- (void)onChangeThemeTapped;
- (void)didSelectImage:(id)a0;
- (id)editPreview;
- (void).cxx_destruct;
- (void)setupUI;

@end
