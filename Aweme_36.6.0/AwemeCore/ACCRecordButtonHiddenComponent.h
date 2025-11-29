@class NSString, UIView;
@protocol ACCRecorderViewContainer, ACCRecordSwitchModeService, AWEStudioInspirationFollowFeaturePublicAPI, ACCRecordUIHiddenStrategyService;

@interface ACCRecordButtonHiddenComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver, ACCRecordSwitchModeServiceSubscriber>

@property (weak, nonatomic) UIView *animationView;
@property (weak, nonatomic) UIView *placeHolderRecordButton;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<AWEStudioInspirationFollowFeaturePublicAPI> inspirationFollowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)bindServices:(id)a0;
- (void)showRecordButtonIfNeededWithAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
