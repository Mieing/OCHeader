@class NSString;

@interface MJAnalyticsPreviewMusicAction : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *previewMusicId;
@property (nonatomic) int previewMusicSourceType;
@property (retain, nonatomic) NSString *previewMusicSongName;
@property (nonatomic) unsigned long long previewDurationMs;
@property (nonatomic) unsigned long long timelineDurationMs;

+ (void)initialize;

@end
