@class ACCAnimatedButton, NSString, UILabel, ACCRecordViewControllerInputData;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCCameraService, ACCSpeedControlService, ACCRecordPropService;

@interface ACCRecordCommerceEnterComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCSpeedControlService> speedControlService;
@property (retain, nonatomic) NSString *lastCommerceEnterEffectID;
@property (retain, nonatomic) ACCAnimatedButton *commerceEnterButton;
@property (retain, nonatomic) UILabel *commerceEnterLabel;
@property (nonatomic) BOOL commerceEnterShowOfPause;
@property (nonatomic) BOOL isFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)clickCommerceEnterAction:(id)a0;
- (void)updateCommerceEnterContentWithText:(id)a0;
- (void)updateCommerceEnterVisibilityWithAnimated:(BOOL)a0;
- (void)trackCommerceEnterPendentWithForce:(BOOL)a0;
- (id)p_stringByAddingPercentEscapes:(id)a0;
- (id)p_addTrackToURL:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObservers;

@end
