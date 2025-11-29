@class BDImageXUploaderClient, NSMutableArray, NSString;
@protocol IESLivePiperProtocol;

@interface AWEECUploadFileHelper : NSObject <BDImageXUploadClientDelegate, BDVideoUploadClientDelegate>

@property (retain, nonatomic) NSMutableArray *imageFilePaths;
@property (retain, nonatomic) NSMutableArray *videoFilePaths;
@property (retain, nonatomic) NSMutableArray *imageFilePathsOriginal;
@property (retain, nonatomic) NSMutableArray *videoFilePathsOriginal;
@property (retain, nonatomic) BDImageXUploaderClient *imageClientTop;
@property (retain, nonatomic) NSMutableArray *videoClientContainer;
@property (copy, nonatomic) NSString *videoDomain;
@property (copy, nonatomic) NSString *videoAK;
@property (copy, nonatomic) NSString *videoSK;
@property (copy, nonatomic) NSString *videoToken;
@property (copy, nonatomic) NSString *spaceName;
@property (copy, nonatomic) NSString *imageDomain;
@property (copy, nonatomic) NSString *imageAK;
@property (copy, nonatomic) NSString *imageSK;
@property (copy, nonatomic) NSString *imageToken;
@property (copy, nonatomic) NSString *serviceID;
@property (nonatomic) long long maxImageSize;
@property (nonatomic) long long bitrate;
@property (nonatomic) BOOL deleteTempVideoFiles;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ preHeatUseBlock;
@property (nonatomic) BOOL fromProductComment;
@property (retain, nonatomic) NSMutableArray *fileDataArray;
@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (long long)videoUploadGetNetState:(id)a0;
- (id)videoUploadGetMetaString:(id)a0;
- (void)videoUpload:(id)a0 onLogInfo:(id)a1;
- (void)uploadFileWithModel:(id)a0;
- (void)startPreHeat:(long long)a0 uploadParams:(id)a1 completion:(id /* block */)a2;
- (void)uploadPhoto:(id)a0 usePreHeat:(id /* block */)a1 completion:(id /* block */)a2;
- (void)uploadFile:(id)a0;
- (void)configUploadCommonParams:(id)a0 uploadParams:(id)a1;
- (void)p_UploadFile;
- (void)configUploadParameter:(id)a0 concurrentFileNum:(long long)a1;
- (void)configRequestParameter:(id)a0;
- (void)configAuthorizationParameter:(id)a0 uploadParams:(id)a1;
- (void).cxx_destruct;

@end
