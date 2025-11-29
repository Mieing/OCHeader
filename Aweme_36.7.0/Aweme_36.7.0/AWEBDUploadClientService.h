@class BDFileSpeedTestClient, NSString, NSArray, BDFileNetworkRoutClient, NSMutableDictionary, UIDocumentInteractionController, AWEResourceUploadParametersResponseModel, BDImageUploaderClient, BDVideoUploaderClient;
@protocol BDExternFileReaderInterface;

@interface AWEBDUploadClientService : NSObject

@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParams;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSArray *filePaths;
@property (nonatomic) unsigned long long uploadFileType;
@property (retain, nonatomic) UIDocumentInteractionController *exportController;
@property (retain, nonatomic) NSMutableDictionary *userReferenceDic;
@property (retain, nonatomic) id<BDExternFileReaderInterface> fileReader;
@property (retain, nonatomic) BDVideoUploaderClient *videoUploadClient;
@property (retain, nonatomic) BDImageUploaderClient *imageUploadClient;
@property (retain, nonatomic) BDFileSpeedTestClient *speedTestClient;
@property (retain, nonatomic) BDFileNetworkRoutClient *routClient;
@property (copy, nonatomic) NSString *traceID;
@property (nonatomic) BOOL manualMergeAllowed;
@property (nonatomic) BOOL enableRoute;
@property (nonatomic) BOOL enableResumeOnDisk;
@property (nonatomic) BOOL disablePreuploadEncryptionMode;
@property (copy, nonatomic) NSString *customUploadMode;
@property (nonatomic) BOOL useUploadWhileMerging;
@property (nonatomic) unsigned long long socketNumber;

- (id)initImagesUploadWithParams:(id)a0 filePaths:(id)a1;
- (id)p_videoUploadConfigParams;
- (id)p_videoUploadRequestParams;
- (id)p_videoUploadAuthParams;
- (int)preuploadEncryptionMode;
- (id)p_imageUploadConfigParams;
- (id)p_imageUploadRequestParams;
- (id)p_imageUploadAuthParams;
- (id)p_stringWithAWEFileType:(unsigned long long)a0;
- (id)p_videoUploadUserReferenceRequestParam;
- (id)initWithUploadParams:(id)a0 fileReader:(id)a1 fileType:(unsigned long long)a2;
- (id)initWithUploadParams:(id)a0 filePath:(id)a1 fileType:(unsigned long long)a2;
- (void)setVideoUploadUserReferenceInfoWithObject:(id)a0 forKey:(id)a1;
- (void)videoUploadClientConfig:(id)a0;
- (void)imageUploadClientConfigNeedPreupload:(BOOL)a0;
- (void)speedTestClientConfig;
- (void)routClientConfigWithRoutMode:(unsigned long long)a0 routWeight:(long long)a1;
- (void).cxx_destruct;

@end
