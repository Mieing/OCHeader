@interface AutoRunTaskSettingControl : WXPBGeneratedMessage

@property (nonatomic) BOOL disableMd5Check;
@property (nonatomic) BOOL disableDownloadResume;
@property (nonatomic) BOOL disablePreloadCommlib;
@property (nonatomic) BOOL disableGameSilentDownload;
@property (nonatomic) BOOL disableWepkgDownloadRetry;
@property (nonatomic) BOOL disableWepkgExpiredClean;
@property (nonatomic) BOOL disableGameMediaCacheClean;

+ (void)initialize;

@end
