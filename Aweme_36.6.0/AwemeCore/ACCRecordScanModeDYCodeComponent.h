@class ACCAnimatedButton, UILabel, NSString;
@protocol ACCRecorderViewContainer, ACCRecordCloseService, ACCRecordModeFactory, ACCRecordScanModelFlowService, ACCRecordSwitchModeService, ACCQRCodeResultHandlerProtocol;

@interface ACCRecordScanModeDYCodeComponent : ACCFeatureComponent <ACCRecordScanModelFlowSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanFlowService;
@property (retain, nonatomic) id<ACCRecordCloseService> closeService;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCQRCodeResultHandlerProtocol> qrCodeResultHandler;
@property (retain, nonatomic) ACCAnimatedButton *codeButton;
@property (retain, nonatomic) UILabel *codeLabel;
@property (retain, nonatomic) ACCAnimatedButton *dyCodeButtonForAuthorityView;
@property (retain, nonatomic) UILabel *dyCodeLabelForAuthorityView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceWillExitScanMode;
- (void)DYCodeUIShow:(BOOL)a0;
- (void)updateAuthorityViewShow:(BOOL)a0;
- (void)clickStickersBtn;
- (void).cxx_destruct;

@end
