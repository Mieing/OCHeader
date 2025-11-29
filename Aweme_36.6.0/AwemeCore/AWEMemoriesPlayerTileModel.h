@class AWEAwemeModel, NSString, UIImage, NSArray, NSURL, PHAsset, NSLock, NSDate, NLEModel_OC, BDWebImageRequest, AWEVideoPublishViewModel;
@protocol ACCDownloadFileTask, AWERecallThemeModelProtocol, ACCMusicModelProtocol;

@interface AWEMemoriesPlayerTileModel : NSObject <AWEMemoriesTileModelProtocol>

@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned long long playerModelType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long playerModelSubType;
@property (copy, nonatomic) NSArray *albumUrlList;
@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) long long imageIndex;
@property (copy, nonatomic) NSString *imageCacheName;
@property (nonatomic) long long resourceLoadState;
@property (nonatomic) double downLoadProgress;
@property (nonatomic) long long themeContentCount;
@property (retain, nonatomic) id<AWERecallThemeModelProtocol> themeModel;
@property (retain, nonatomic) NSLock *assetsLock;
@property (retain, nonatomic) UIImage *coverImage;
@property (readonly, copy, nonatomic) NSString *localImageCacheName;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NLEModel_OC *themeNLEModel;
@property (nonatomic) BOOL didFetchNLEFrame;
@property (retain, nonatomic) id<ACCMusicModelProtocol> themeMusicModel;
@property (nonatomic) BOOL needToBeCanceled;
@property (nonatomic) int localRequestID;
@property (weak, nonatomic) id<ACCDownloadFileTask> awemeVideoTask;
@property (weak, nonatomic) BDWebImageRequest *awemeImageTask;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createAuthTileModel;
+ (id)createAwemeAlbumTileModelWithAwemeModel:(id)a0 albumUrlList:(id)a1 imageIndex:(long long)a2;
+ (id)createAwemeVideoTileModelWithAwemeModel:(id)a0;
+ (id)createLocalImageTileModelWithLocalIdentifier:(id)a0;
+ (id)createLocalImageTileModelWithPHAsset:(id)a0;
+ (id)createLocalVideoTileModelWithLocalIdentifier:(id)a0;
+ (id)createLocalVideoTileModelWithPHAsset:(id)a0;
+ (id)createThemeVideoTileModelWithThemeModel:(id)a0;

- (void)downloadSuccess;
- (id)awemeModelForShare;
- (void)downloadPrepared;
- (void)downloadInProcess:(double)a0;
- (void)downloadCanceled;
- (void)releaseCoverImage;
- (void)preloadLocalImage;
- (id)makeModel:(id)a0 musicData:(id)a1 themeModel:(id)a2;
- (id)addMainSticker:(id)a0 yoffset:(double)a1 fontSize:(double)a2;
- (void)buildNLEModelWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)cancelDownload;
- (void).cxx_destruct;
- (void)resetState;
- (void)downloadFailed;

@end
