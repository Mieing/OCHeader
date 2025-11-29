@class MusicRelatedRecommendInfo, BaseResponse;

@interface FinderGetTopicRecommendMusicResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MusicRelatedRecommendInfo *musicInfo;

+ (void)initialize;

@end
