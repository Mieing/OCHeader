@interface AWEMediaDownloadConfigCommon : AWEMediaDownloadConfig

- (BOOL)forceRemux;
- (BOOL)shouldForbidWartermark;
- (BOOL)newDownloadUX;
- (id)downloadSizeTextWithSizeInByte;
- (id)loadingViewTitle;
- (id)disabledDownloadMessage;
- (BOOL)checkAwemeDownloadSecurity;
- (Class)loadingViewClass;
- (BOOL)usingUploadCache;
- (BOOL)usingPlayerCache;
- (BOOL)needCancelToast;
- (BOOL)selfSeeingShouldSaveDirectly;
- (BOOL)checkShouldForbidDownloadByAllowDownload;
- (BOOL)shouldSaveDirectly;
- (BOOL)needAsset;
- (BOOL)enableSaveToAlbumChangeCreateTime;
- (BOOL)forbidWatermark;
- (BOOL)isSuffixScene;
- (BOOL)serverCaptionWatermark;
- (BOOL)serverEndWatermark;
- (BOOL)serverNormalWatermark;
- (BOOL)shouldMuteVideo;
- (id)watermarkConfig;
- (BOOL)isForbidDownload;
- (BOOL)needClientEndWaterMark;
- (BOOL)needClientWaterMark;
- (double)createTime;
- (id)destinationURL;
- (id)downloadURL;
- (BOOL)isCurrentUser;

@end
