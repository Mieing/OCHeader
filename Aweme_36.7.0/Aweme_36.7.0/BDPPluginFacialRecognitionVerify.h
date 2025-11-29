@class BDPFacialRecognitionAlertControllerLogic, BDPUniqueID;

@interface BDPPluginFacialRecognitionVerify : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFacialRecognitionAlertControllerLogic *alertVCLogic;

- (id)encryptString:(id)a0 key:(id)a1 iv:(id)a2;
- (id)errorTypeForErrorCode:(long long)a0;
- (id)decryptString:(id)a0 key:(id)a1 iv:(id)a2;
- (void)buildErrorForErrorCode:(long long)a0 callback:(id /* block */)a1;
- (void)useFacialRecognitionVerifyWithParams:(id)a0 serviceType:(long long)a1 callback:(id /* block */)a2 instance:(id)a3;
- (void)loginIfNeededWithAppID:(id)a0 completion:(id /* block */)a1;
- (long long)errorCodeForAILabErrorCode:(long long)a0;
- (void)buildErrorForErrorInformation:(long long)a0 sdkCode:(long long)a1 errorMsg:(id)a2 callback:(id /* block */)a3;
- (void)checkCameraPermissionAndRequestWithAppId:(id)a0 completion:(id /* block */)a1;
- (id)errorForAILabFacialRecognitionErrorCode:(long long)a0;
- (BOOL)needReportCancelForAILabCode:(long long)a0;
- (void)updateFacialRecognitionResultForServiceType:(long long)a0 errorCode:(long long)a1 cancel:(BOOL)a2 orderNumber:(id)a3 completion:(id /* block */)a4;
- (id)facialSdkVersionForServiceType:(long long)a0;
- (id)hostApplicationid;
- (id)commonRequestParamWithURL:(id)a0 params:(id)a1;
- (long long)errorCodeForServerErrorCode:(long long)a0;
- (long long)callBackTypeForErrorCode:(long long)a0;
- (long long)callBackCodeForErrorCode:(long long)a0;
- (id)callBackMsgForError:(id)a0;
- (id)errorMsgForErrorCode:(long long)a0;
- (unsigned long long)errNumForErrorCode:(long long)a0;
- (long long)errCodeForErrorCode:(long long)a0;
- (long long)errorCodeForAILabV3ErrorCode:(long long)a0;
- (void)startFacialRecognitionVerifyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)handleHostFacialRecognitionComplteForServiceType:(long long)a0 errorCode:(long long)a1 orderNumber:(id)a2 completion:(id /* block */)a3;
- (void)handleError:(id)a0 andCallBack:(id /* block */)a1;
- (void).cxx_destruct;
- (id)errorWithCode:(long long)a0;
- (id)init;

@end
