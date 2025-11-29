@class BDVideoUploaderClient, NSString;
@protocol ACCVideoConfigProtocol, BDVideoUploadClientDelegate;

@interface ACCBDVideoUploadService : ACCBDFileUploadService <BDVideoUploadClientDelegate>

@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) BDVideoUploaderClient *videoUploadClient;
@property (retain, nonatomic) id<BDVideoUploadClientDelegate> videoUploadDelegate;
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
- (id)videoUploadParameters;
- (id)p_videoUploadConfigParams;
- (id)p_videoUploadRequestParams;
- (id)p_videoUploadAuthParams;
- (id)p_stringFromFileType:(unsigned long long)a0;
- (void)startUploading;
- (void)configVideoUploadDelegateWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
