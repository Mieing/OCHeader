@class NSString, ACCRecordMode;
@protocol ACCRecordModeFactory, ACCRecordSwitchModeService, ACCRecordScanModelFlowService;

@interface ACCRecordScanModeViewModel : ACCRecorderViewModel <ACCRecordScanModelFlowSubscriber, ACCRecordScanModeService>

@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanModelFlowService;
@property (retain, nonatomic) ACCRecordMode *scanRecordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceWillExitScanMode;
- (void)traggerEnterScanMode;
- (void)traggerExitScanMode;
- (BOOL)abSupportScan;
- (id)recordScanModelFlowServiceImpl;
- (void).cxx_destruct;

@end
