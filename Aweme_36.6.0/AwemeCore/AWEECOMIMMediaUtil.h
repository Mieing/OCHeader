@class NSString, NSMutableArray, AWEECOMIMVideoItemModel;

@interface AWEECOMIMMediaUtil : NSObject <AWEECOMIMUploadImageHelperDelegate, AWEECOMIMUploadVideoHelperDelegate>

@property (retain, nonatomic) NSMutableArray *uploadImageHelpers;
@property (retain, nonatomic) NSMutableArray *uploadVideoHelpers;
@property (weak, nonatomic) AWEECOMIMVideoItemModel *downloadVideoItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageUploadHost;
+ (id)videoUploadHost;
+ (id)videoFetchDomain;
+ (id)shared;

- (void)transCodeVideoWithPigeonBizType:(id)a0 vid:(id)a1 completion:(id /* block */)a2;
- (void)publishVideoWithPigeonBizType:(id)a0 vid:(id)a1 receiverId:(id)a2 completion:(id /* block */)a3;
- (void)uploadVideoWithPigeonBizType:(id)a0 filePath:(id)a1 updateCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (void)uploadImageToTOSWithPigeonBizType:(id)a0 imageData:(id)a1 imageName:(id)a2 completion:(id /* block */)a3;
- (void)uploadImageWithPigeonBizType:(id)a0 fileDatas:(id)a1 completion:(id /* block */)a2;
- (void)uploadImageHelperDidFinish:(id)a0;
- (void)uploadImageWithPigeonBizType:(id)a0 fileDatas:(id)a1 progresses:(id)a2 completion:(id /* block */)a3;
- (void)uploadVideoHelperDidFinish:(id)a0;
- (void)fetchVideoApiStrWithPigeonBizType:(id)a0 vid:(id)a1 completion:(id /* block */)a2;
- (void)saveVideoWithVideoItem:(id)a0 pigeonBizType:(id)a1;
- (void)saveVideoToAlbumWithFilePathURL:(id)a0;
- (void)downloadVideoWithVideoItem:(id)a0 pigeonBizType:(id)a1 needSave:(BOOL)a2 completion:(id /* block */)a3;
- (void)downloadThenSaveVideoWithVid:(id)a0 needSave:(BOOL)a1 videoName:(id)a2 urlList:(id)a3 startBlock:(id /* block */)a4 progressBlock:(id /* block */)a5 finishedBlock:(id /* block */)a6;
- (void)getVideoBasicInfoWithVid:(id)a0 apiForFetcher:(id)a1 completion:(id /* block */)a2;
- (void)configureVideoEngineIfNeeded;
- (void)showPreviewItems:(id)a0 currentIndex:(long long)a1 pigeonBizType:(id)a2;
- (id)ecomim_formatedTimeStrOfPlayTimeInterval:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
