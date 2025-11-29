@class BDPUniqueID, BDPFacialRecognitionAlertControllerLogic_HG;

@interface BDPPluginFacialRecognitionVerify_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFacialRecognitionAlertControllerLogic_HG *alertVCLogic;

- (id)encryptString:(id)a0 key:(id)a1 iv:(id)a2;
- (id)decryptString:(id)a0 key:(id)a1 iv:(id)a2;
- (long long)errorCodeForAILabErrorCode:(long long)a0;
- (id)errorForAILabFacialRecognitionErrorCode:(long long)a0;
- (BOOL)needReportCancelForAILabCode:(long long)a0;
- (void)updateFacialRecognitionResultForServiceType:(long long)a0 errorCode:(long long)a1 cancel:(BOOL)a2 orderNumber:(id)a3 completion:(id /* block */)a4;
- (id)facialSdkVersionForServiceType:(long long)a0;
- (id)hostApplicationid;
- (id)commonRequestParamWithURL:(id)a0 params:(id)a1;
- (long long)errorCodeForServerErrorCode:(long long)a0;
- (long long)callBackTypeForErrorCode:(long long)a0;
- (id)callBackMsgForError:(id)a0;
- (id)errorMsgForErrorCode:(long long)a0;
- (long long)errorCodeForAILabV3ErrorCode:(long long)a0;
- (void)startFacialRecognitionVerifyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)handleHostFacialRecognitionComplteForServiceType:(long long)a0 errorCode:(long long)a1 orderNumber:(id)a2 completion:(id /* block */)a3;
- (void)handleError:(id)a0 andCallBack:(id /* block */)a1;
- (void)_startFacialRecognitionVerifyWithUserName:(id)a0 idCard:(id)a1 callback:(id /* block */)a2 instance:(id)a3;
- (void)loginIfNeeded:(id)a0 completion:(id /* block */)a1;
- (BOOL)isValidServiceType:(long long)a0;
- (void)checkCameraPermissionAndRequest:(id /* block */)a0;
- (void)showFacialRecognitionAlertWithUniqueID:(id)a0 userName:(id)a1 completion:(id /* block */)a2;
- (void)fetchServiceParamsWithUniqueId:(id)a0 hostAppId:(id)a1 hostVersion:(id)a2 identifyName:(id)a3 identifyCode:(id)a4 completion:(id /* block */)a5;
- (void)trackMPFacialRecognition:(id)a0 error:(id)a1 payType:(id)a2;
- (void)facialRecognitionVerifyWithParam:(id)a0 callback:(id /* block */)a1 payType:(id)a2 uniqueID:(id)a3;
- (void)showPyFacialRecognitionWithUniqueID:(id)a0 completion:(id /* block */)a1 payType:(id)a2;
- (void)showPyFaceRecognitionToast:(BOOL)a0;
- (BOOL)shouldFailForPy:(id)a0 errorCode:(long long)a1;
- (void)startPayFacialRecognitionVerifyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)errorWithCode:(long long)a0;
- (id)init;

@end
