@class ACCPOIUGCRecordSwitchModeViewModel, NSString, AWESwitchRecordModeView;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCRecordModeFactory, ACCRecordSwitchModeService;

@interface AWEPOIUGCRecordSwitchModeComponent : ACCFeatureComponent <ACCRecordVideoEventHandler, ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver>

@property (retain, nonatomic) AWESwitchRecordModeView *switchModeView;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) ACCPOIUGCRecordSwitchModeViewModel *viewModel;
@property (nonatomic) BOOL isFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)modeArrayDidChanged;
- (void)tabConfigDidUpdatedWithModeId:(long long)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)bindServices:(id)a0;
- (void)loadChildViews;
- (void)updateSwitchModeViewHiddenWithFade:(BOOL)a0;
- (void)showSwitchContainerViewIfNeed:(BOOL)a0;
- (id)recordVideoEvent;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
