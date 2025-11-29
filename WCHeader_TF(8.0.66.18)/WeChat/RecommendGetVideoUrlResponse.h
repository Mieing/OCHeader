@class VideoUrlInfo, BaseResponse;

@interface RecommendGetVideoUrlResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) VideoUrlInfo *videoUrlInfo;

+ (void)initialize;

@end
