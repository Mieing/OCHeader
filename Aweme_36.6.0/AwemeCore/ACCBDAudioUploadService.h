@class BDVideoUploaderClient, NSDictionary, NSString;
@protocol ACCVideoConfigProtocol, BDVideoUploadClientDelegate;

@interface ACCBDAudioUploadService : ACCBDFileUploadService <BDVideoUploadClientDelegate>

@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) BDVideoUploaderClient *audioUploadClient;
@property (retain, nonatomic) id<BDVideoUploadClientDelegate> videoUploadDelegate;
@property (copy, nonatomic) NSDictionary *authParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (long long)videoUploadGetNetState:(id)a0;
- (id)videoUploadGetMetaString:(id)a0;
- (void)videoUpload:(id)a0 onLogInfo:(id)a1;
- (void)videoUpload:(id)a0 updateVideoStage:(long long)a1 timestamp:(double)a2;
- (void)stopUploading;
- (void)updateAuthParams:(id)a0;
- (id)videoUploadParameters;
- (id)audioUploadParameters;
- (void)closeUploading;
- (id)p_audioUploadConfigParams;
- (id)p_audioUploadRequestParams;
- (id)p_audioUploadAuthParams;
- (id)p_stringFromFileType:(unsigned long long)a0;
- (id)p_customedParameter;
- (id)netTypeString;
- (void)startUploading;
- (void)configAudioUploadDelegateWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
