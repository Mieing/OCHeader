@class ACCAnimatedButton;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface AWEYapEditFinishComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) ACCAnimatedButton *nextButton;

- (void)nextButtonClicked;
- (void)loadComponentView;
- (void)componentDidMount;
- (id)serviceBinding;
- (void)configBottomViewIfNeeded;
- (void)configCornerRadius:(double)a0 forView:(id)a1;
- (void)p_nextButtonClicked;
- (void)trackFinishBtnClicked;
- (void)updateFinishBtnTitle:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)nextButtonTitle;

@end
