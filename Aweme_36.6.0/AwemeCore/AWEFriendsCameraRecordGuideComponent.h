@class UILabel, NSString;
@protocol ACCRecordUIHiddenStrategyService, ACCRecorderViewContainer;

@interface AWEFriendsCameraRecordGuideComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) UILabel *recordGuideLabel;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (nonatomic) BOOL hasAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)viewContainerDidLayout;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)dismissIfNeeded;
- (void)p_configPredicate;
- (void)updateLabelHiddenWithAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
