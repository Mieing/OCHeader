@class ACCRecordSwitchModeViewModel, NSString, ACCGroupedPredicate, AWESwitchRecordModeView;
@protocol ACCRecorderViewContainer, ACCRecordSwitchModeService, ACCRecordModeFactory, ACCDuetSessionSwtichService;

@interface ACCScanSwitchModeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCSubviewLayoutProtocol>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) ACCRecordSwitchModeViewModel *viewModel;
@property (retain, nonatomic) AWESwitchRecordModeView *switchModeView;
@property (readonly, nonatomic) ACCGroupedPredicate *shouldShowSwitchModeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)modeArrayDidChanged;
- (void)tabConfigDidUpdatedWithModeId:(long long)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (void)bindServices:(id)a0;
- (void)updateSwitchModeViewHiddenWithFade:(BOOL)a0;
- (void)layoutContainer:(id)a0 subview:(id)a1;
- (void)updateSwitchModeViewHiddenIfNeed;
- (void)updateSwitchModeViewHidden:(BOOL)a0;
- (void)updateSwitchModeViewHiddenWithFade:(BOOL)a0 currentMode:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupUI;

@end
