@class ChameleonUtils, NSMutableDictionary, AFEAlertView, NSString, NSDate, APBDTFUploadToastView;

@interface APBToygerCherryUploadTask : APBToygerUploadTask <APBToygerDataCenterDelegate>

@property (retain, nonatomic) APBDTFUploadToastView *uploadView;
@property (retain, nonatomic) AFEAlertView *alertView;
@property (nonatomic) BOOL keepUploadPage;
@property (nonatomic) BOOL mergeRpc;
@property (retain, nonatomic) NSDate *starUploadTimer;
@property (retain, nonatomic) ChameleonUtils *chameleonUtils;
@property (retain, nonatomic) NSMutableDictionary *chameleonDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)uploadImage;
- (void)_uploadImage;
- (void)invokeWithPipeInfo:(id)a0;
- (void)didFinishUploadWithSuccess:(BOOL)a0 retCode:(id)a1 retMessage:(id)a2 extInfo:(id)a3;
- (void)processEvent:(id)a0 withCompletionCallback:(id /* block */)a1;
- (void)dataCenterClear;
- (void)_addDarkScreen;
- (void)handleRemoteCommand:(long long)a0 retCodeSub:(id)a1 retMessageSub:(id)a2;
- (void)handleRetry;
- (void)handleNetworkErrorWith1006;
- (void)handleNetworkErrorWithRetCode:(id)a0 retMessage:(id)a1 extInfo:(id)a2;
- (BOOL)checkUploadImageData:(id)a0;
- (void)requestAgain;
- (void)requestValidateData;
- (long long)remoteCommandFromString:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
