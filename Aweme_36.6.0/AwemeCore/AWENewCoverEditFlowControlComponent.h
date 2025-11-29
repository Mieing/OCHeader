@class ACCAnimatedButton, UIButton, AWENewCoverEditFlowViewModel;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCMultiStyleAlertProtocol;

@interface AWENewCoverEditFlowControlComponent : ACCFeatureComponent

@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) id<ACCMultiStyleAlertProtocol> backAlert;
@property (retain, nonatomic) AWENewCoverEditFlowViewModel *viewModel;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;

- (void)backButtonClicked;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)trackCommonParams;
- (void)saveButtonClicked;
- (void)configTopView;
- (void)configBottomView;
- (void)trackEnterCoverEdit;
- (BOOL)hasUnsavedChange;
- (void)p_dismissAction;
- (void)trackExitCoverEditor;
- (void)p_saveTemplateInfoOnlyImage;
- (void)trackSaveCoverEditWithAdjusted:(BOOL)a0;
- (void)saveButtonClickedWithAdjusted:(BOOL)a0;
- (id)p_templateInfoOnlyImageFilePath;
- (BOOL)p_saveImage:(id)a0 toFile:(id)a1;
- (void)backAction;
- (void).cxx_destruct;
- (void)dismissHandler;
- (id)containerViewController;
- (void)dealloc;
- (id)inputData;

@end
