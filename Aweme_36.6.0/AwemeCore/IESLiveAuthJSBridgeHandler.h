@class NSString;
@protocol IESLivePiperProtocol;

@interface IESLiveAuthJSBridgeHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLivePiperProtocol> bridge;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)getClientSettingCallHandler;
- (id /* block */)aweme_broadcastCallHandler;
- (id /* block */)accountLogoutCallHandler;
- (id /* block */)setNativeItemCallHandler;
- (id /* block */)syncCertificationStatusCallHandler;
- (id /* block */)zhimaOpenCallHandler;
- (id /* block */)ocrTakePhotoCallHandler;
- (id /* block */)openLiveCertCallHandler;
- (id /* block */)openByteCertCallHandler;
- (id /* block */)ocrUploadPhotoCallHandler;
- (id /* block */)getAliCloudMetaInfoCallHandler;
- (id /* block */)openAliCloudCertCallHandler;
- (id /* block */)secondValidCallHandler;
- (id /* block */)authCertifiToFinanceCallHandler;
- (void)showViewOnTopWithVC:(id)a0;
- (void).cxx_destruct;

@end
