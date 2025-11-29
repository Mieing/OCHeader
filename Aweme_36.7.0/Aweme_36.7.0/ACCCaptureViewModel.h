@class NSString, RACSubject, RACSignal, ACCEffectMessageDownloader, IESEffectModel;
@protocol ACCNetworkReachabilityProtocol;

@interface ACCCaptureViewModel : ACCRecorderViewModel <ACCCaptureService>

@property (retain, nonatomic) id<ACCNetworkReachabilityProtocol> reachabilityManager;
@property (retain, nonatomic) ACCEffectMessageDownloader *downloader;
@property (retain, nonatomic) RACSubject *captureReadyForSwitchModeSubject;
@property (retain, nonatomic) IESEffectModel *currentProp;
@property (copy, nonatomic) id /* block */ toastHandler;
@property (copy, nonatomic) id /* block */ loadingHandler;
@property (copy, nonatomic) id /* block */ sendMessageHandler;
@property (readonly, nonatomic) RACSignal *captureReadyForSwitchModeSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJson:(id)a0 taskId:(long long)a1;
- (void)send_captureReadyForSwitchModeSignal:(id)a0 oldMode:(id)a1;
- (void)updateCurrentPropIfNeeded:(id)a0;
- (void)handleEFfectMessageWithArg2:(long long)a0 arg3:(id)a1;
- (void)handleToastWithReceiveBody:(id)a0 taskId:(long long)a1;
- (void)handleRequestWithJson:(id)a0 taskId:(long long)a1;
- (void)handleDownloadWithJsonArray:(id)a0 taskId:(long long)a1;
- (void)handleDownloadModelWithJson:(id)a0 taskId:(long long)a1;
- (void)handleEffectInfoWithJson:(id)a0 taskId:(long long)a1;
- (BOOL)isValidUrl:(id)a0;
- (void)sendMessageToEffect:(id)a0 taskId:(long long)a1 msgId:(long long)a2;
- (void)requestWithMethod:(id)a0 urlString:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)trackToolsRealCameraAiDownload:(id)a0 isSucceeded:(BOOL)a1 errorCode:(long long)a2 errorMsg:(id)a3 duration:(long long)a4;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;

@end
