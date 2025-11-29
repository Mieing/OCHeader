@class ACCTextReaderCategoryPanelContainer, ACCEditTextReaderViewModel, AWETextReaderModel;
@protocol ACCTextReaderTrackerProtocol, ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCEditServiceProtocol;

@interface ACCEditTextReaderComponent : ACCFeatureComponent

@property (retain, nonatomic) ACCEditTextReaderViewModel *viewModel;
@property (retain, nonatomic) ACCTextReaderCategoryPanelContainer *categoryPage;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> playControlService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (copy, nonatomic) AWETextReaderModel *currentTextReaderModel;
@property (retain, nonatomic) id<ACCTextReaderTrackerProtocol> tracker;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)serviceBinding;
- (void)configTracker;
- (void)bindServices:(id)a0;
- (void)triggleTextReaderView:(id)a0;
- (void)configRepoManager;
- (void)updateTextReaderPanelModel;
- (void)showTextReaderView:(id)a0;
- (void)constructCategoryPage;
- (void)dismissTextReaderViewWithPickerResult:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
