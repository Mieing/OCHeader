@class BDImageUploaderClient, NSMutableDictionary, NSString;
@protocol ACCVideoConfigProtocol, BDImageUploadClientDelegate;

@interface ACCBDImageUploadService : ACCBDFileUploadService <BDImageUploadClientDelegate>

@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) BDImageUploaderClient *imageUploadClient;
@property (retain, nonatomic) id<BDImageUploadClientDelegate> imageUploadDelegate;
@property (retain, nonatomic) NSMutableDictionary *materialIDMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopUploading;
- (void)imageUploadDidFinish:(id)a0;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageUpload:(id)a0 onLogInfo:(id)a1;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (long long)imageUploadGetNetState:(id)a0;
- (id)frameUploadParameters;
- (id)p_imageUploadConfigParams;
- (id)p_imageUploadAuthParams;
- (void)startUploading;
- (id)p_activityUploadAuthParams;
- (void)configImageUploadDelegateWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
