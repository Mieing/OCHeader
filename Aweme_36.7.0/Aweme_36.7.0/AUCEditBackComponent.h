@class ACCAnimatedButton;
@protocol ACCEditViewContainer, ACCEditServiceProtocol;

@interface AUCEditBackComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCAnimatedButton *backButton;

- (void)backClicked;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)removePreUploadingTaskWhenQuit;
- (void).cxx_destruct;
- (void)dismissHandler;
- (id)containerViewController;
- (id)backButtonTitle;

@end
