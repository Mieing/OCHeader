@class AWEMediaDownloadOptions;

@interface AWEMediaDownloadConfig : NSObject

@property (retain, nonatomic) AWEMediaDownloadOptions *downloadOptions;
@property (nonatomic) BOOL isPhotoAuthorizationNotDetermined;

+ (id)createConfigWithOptions:(id)a0;
+ (Class)classWithOptions:(id)a0;
+ (id)downloadConfigMap;

- (id)awemeModel;
- (BOOL)forceRemux;
- (BOOL)shouldForbidWartermark;
- (BOOL)newDownloadUX;
- (id)downloadSizeTextWithSizeInByte;
- (id)loadingViewTitle;
- (id)disabledDownloadMessage;
- (BOOL)checkAwemeDownloadSecurity;
- (Class)loadingViewClass;
- (id)indicesToDownload;
- (BOOL)usingUploadCache;
- (BOOL)usingPlayerCache;
- (BOOL)needCancelToast;
- (BOOL)notBlockOperation;
- (BOOL)selfSeeingShouldSaveDirectly;
- (BOOL)checkShouldForbidDownloadByAllowDownload;
- (BOOL)shouldSaveDirectly;
- (BOOL)needAsset;
- (BOOL)muteDownloadForCopyrightMusic;
- (BOOL)enableSaveToAlbumChangeCreateTime;
- (BOOL)shouldMuteVideo;
- (id)watermarkConfig;
- (BOOL)isForbidDownload;
- (BOOL)needClientEndWaterMark;
- (BOOL)needClientWaterMark;
- (void).cxx_destruct;
- (double)createTime;
- (id)destinationURL;
- (unsigned long long)downloadType;
- (id)downloadURL;
- (BOOL)isCurrentUser;
- (BOOL)shouldShowLoading;

@end
