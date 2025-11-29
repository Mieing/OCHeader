@class ACCAnimatedButton, NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordScanModelFlowService;

@interface ACCRecordScanModeHistoryComponent : ACCFeatureComponent <ACCRecordScanModelFlowSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanFlowService;
@property (retain, nonatomic) ACCAnimatedButton *historyButton;
@property (retain, nonatomic) ACCAnimatedButton *historyButtonForAuthorityView;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceWillExitScanMode;
- (void)clickEnterBtn;
- (void).cxx_destruct;

@end
