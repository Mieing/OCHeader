@class ACCAnimatedButton;
@protocol ACCEditViewContainer, ACCEditServiceProtocol;

@interface AWEYapEditBackComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCAnimatedButton *recaptureButton;

- (void)backClicked;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)configBottomViewIfNeeded;
- (void)configCornerRadius:(double)a0 forView:(id)a1;
- (void)removePreUploadingTaskWhenQuit;
- (void).cxx_destruct;
- (void)dismissHandler;
- (id)containerViewController;
- (id)backButtonTitle;

@end
