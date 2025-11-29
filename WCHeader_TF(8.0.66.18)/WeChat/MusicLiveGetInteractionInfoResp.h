@class BaseResponse;

@interface MusicLiveGetInteractionInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) unsigned int commentCount;
@property (nonatomic) unsigned int forwardCount;
@property (nonatomic) BOOL hasLiked;

+ (void)initialize;

@end
