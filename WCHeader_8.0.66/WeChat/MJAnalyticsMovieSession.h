@class NSString, NSMutableArray, MJAnalyticsTemplateRecommendation;

@interface MJAnalyticsMovieSession : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSMutableArray *templateActions;
@property (nonatomic) unsigned long long totalPreviewDurationMs;
@property (nonatomic) unsigned long long exportDurationMs;
@property (retain, nonatomic) NSString *exportTemplateId;
@property (retain, nonatomic) NSString *exportMusicId;
@property (retain, nonatomic) MJAnalyticsTemplateRecommendation *templateRecommendation;
@property (retain, nonatomic) NSString *exportMusicSongName;
@property (nonatomic) int exportMusicSourceType;
@property (nonatomic) int exportTemplateSourceType;
@property (retain, nonatomic) NSMutableArray *fixedTemplateIds;

+ (void)initialize;

@end
