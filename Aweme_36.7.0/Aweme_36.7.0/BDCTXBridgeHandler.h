@class BDCTFlow, NSString, BDCTBridgeImp, NSMutableArray;

@interface BDCTXBridgeHandler : NSObject <BDCTEventDelegate>

@property (retain, nonatomic) BDCTBridgeImp *bridgeImp;
@property (retain, nonatomic) NSMutableArray *registeredMethod;
@property (weak, nonatomic) BDCTFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fireEvent:(id)a0 params:(id)a1;
- (void)createBridges;
- (void)registerGetAppInfoMethod;
- (void)registerLaunchFlowMethod;
- (void)registerOpenLoginPageMethod;
- (void)registerClosePageMethod;
- (void)registerOpenPageMethod;
- (void)registerOpenLiveCertMethod;
- (void)registerOpenVideoCertMethod;
- (void)registerTakePhotoMethod;
- (void)registerUploadPhotoMethod;
- (void)registerDoOCRMethod;
- (void)registerTakeOCRPhotoMethod;
- (void)registerManualVerifyMethod;
- (void)registerPreManualCheckMethod;
- (void)registerAppFetchMethod;
- (void)registerCertFetchMethod;
- (void)registerDoRequestMethod;
- (void)registerUploadMethod;
- (void)registerSendLogMethod;
- (void)registerWebEventMethod;
- (void)registerUploadEventMethod;
- (void)registerSetCertStatusMethod;
- (void)registerDialogShowMethod;
- (void)registerShowLoadingMethod;
- (void)registerHideLoadingMethod;
- (void)registerOpenVideoRecordMethod;
- (void)registerStartNFCMethod;
- (void)registerStopNFCMethod;
- (void)registerOpenCNNetAuthMethod;
- (void)registerAddEvtListenerMethod;
- (void)registerRemoveEvtListenerMethod;
- (void)registerSendEventMethod;
- (void)registerOpenAndCloseMethod;
- (void)registerSwitchLanguageMethod;
- (void).cxx_destruct;
- (id)initWithFlow:(id)a0;

@end
