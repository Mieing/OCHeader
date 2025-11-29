@class UIButton, UILabel, NSString;
@protocol ACCRecorderViewContainer, ACCCameraService;

@interface AWESearchAIGCVisionCameraComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) UIButton *torchButton;
@property (retain, nonatomic) UIButton *flipButton;
@property (retain, nonatomic) UILabel *flipButtonLabel;
@property (nonatomic) BOOL isTorchModeOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillDisappear;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)clickFlipButton;
- (void)clickTorchButton;
- (id)resizeImage:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)containerViewDidLayoutSubviews;

@end
