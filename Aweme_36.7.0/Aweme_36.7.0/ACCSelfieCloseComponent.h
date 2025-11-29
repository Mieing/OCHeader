@class UIButton;
@protocol ACCRecorderViewContainer, ACCSelfieCloseComponentService;

@interface ACCSelfieCloseComponent : ACCFeatureComponent

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCSelfieCloseComponentService> closeServiceImpl;

- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)clickCloseBtn:(id)a0;
- (void).cxx_destruct;

@end
