@class NSString;

@interface FinderLiveCdnTransPreloadInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int videoQualityLevel;
@property (nonatomic) float preloadFileSizePercent;
@property (nonatomic) unsigned int preloadFileBytes;
@property (nonatomic) unsigned int fileTotalBytes;
@property (nonatomic) float preloadFileDurationPercent;
@property (nonatomic) unsigned int preloadFileDuration;
@property (nonatomic) unsigned int preloadFileTotalDuration;
@property (nonatomic) unsigned long long preloadStartTime;
@property (retain, nonatomic) NSString *tagName;

+ (void)initialize;

@end
