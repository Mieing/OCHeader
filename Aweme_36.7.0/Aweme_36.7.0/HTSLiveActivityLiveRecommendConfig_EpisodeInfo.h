@class NSString;

@interface HTSLiveActivityLiveRecommendConfig_EpisodeInfo : IESLivePBBaseMessage

@property (nonatomic) int contentType;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
