@class UIButton, UILabel, AWEUILoadingView, ACCVideoEditFlowControlViewModel;
@protocol ACCEditViewContainer, ACCEditMusicServiceProtocol, AWEECHalfPostDataControllerProtocol, ACCEditServiceProtocol;

@interface AWEECommerceEditFlowControlComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (retain, nonatomic) ACCVideoEditFlowControlViewModel *viewModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) id<AWEECHalfPostDataControllerProtocol> dataController;

- (void)dismissLoadingView;
- (void)loadComponentView;
- (void)componentDidMount;
- (id)serviceBinding;
- (void)confirmButtonDidClicked:(id)a0;
- (void)backButtonDidClicked:(id)a0;
- (id)viewMasTop;
- (void)adaptSinglePicDuration;
- (void).cxx_destruct;
- (id)containerViewController;
- (void)showLoadingView;
- (void)upload;

@end
