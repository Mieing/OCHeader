@class ACCRecordSubmodeViewModel, NSString, ACCRecordContainerMode, ACCSwitchLengthView;
@protocol ACCRecordSwitchModeService, ACCRecordFrameRatioService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordModeFactory, ACCRecordUIHiddenStrategyService, ACCRecordSwitchModeGestureService, ACCQuickStoryRecorderTipsService, ACCRecordDurationService, ACCDuetSessionSwtichService, ACCFilterService, ACCCameraService;

@interface ACCRecordSubmodeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCSwitchLengthViewDelegate, ACCRecordFrameRatioServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordPropServiceSubscriber, ACCDuetSessionSwtichServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (retain, nonatomic) id<ACCQuickStoryRecorderTipsService> quickStoryTipsService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordSwitchModeGestureService> modeGestureService;
@property (retain, nonatomic) id<ACCRecordDurationService> durationService;
@property (retain, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (retain, nonatomic) ACCRecordSubmodeViewModel *viewModel;
@property (weak, nonatomic) ACCRecordContainerMode *containerMode;
@property (retain, nonatomic) ACCSwitchLengthView *switchLengthView;
@property (nonatomic) BOOL hasSwitch60SecondForMultiSegProp;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)modeIndexDidChangeTo:(long long)a0 method:(long long)a1;
- (BOOL)switchLengthView:(id)a0 shouldSelectItem:(long long)a1;
- (BOOL)switchLengthViewForbidHitTest;
- (void)bindServices:(id)a0;
- (void)recordFrameWillSwitchToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didSwitchToDuetMode;
- (void)didSwitchToNormalMode;
- (BOOL)shouldShowSitchLengthView;
- (void)updateSwitchLengthViewHidden;
- (void)adjustLengthViewWithPreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)trackIdentifierWithMode:(id)a0;
- (void)switchTo60SecondsModeWhenMultiSegPropApplied;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
