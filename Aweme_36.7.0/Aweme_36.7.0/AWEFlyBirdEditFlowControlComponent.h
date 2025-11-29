@class ACCVideoEditFlowControlViewModel, DUXCheckBox, UIView, UILabel, UIButton;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCLoadingViewProtocol;

@interface AWEFlyBirdEditFlowControlComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) ACCVideoEditFlowControlViewModel *viewModel;
@property (retain, nonatomic) UIButton *saveToLocalContainerView;
@property (retain, nonatomic) DUXCheckBox *saveBox;
@property (retain, nonatomic) UILabel *saveToLocalLabel;

- (void)dismissLoadingView;
- (void)loadComponentView;
- (void)componentDidMount;
- (id)serviceBinding;
- (void)confirmButtonDidClicked:(id)a0;
- (void)saveImage:(id)a0;
- (void)backButtonDidClicked:(id)a0;
- (void)onClickSaveBox;
- (void)saveVideoWithPath:(id)a0;
- (void).cxx_destruct;
- (void)dismissHandler;
- (id)containerViewController;
- (void)showLoadingView;
- (void)upload;

@end
