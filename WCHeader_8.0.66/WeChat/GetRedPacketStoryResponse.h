@class RedPacketStoryInfo, BaseResponse;

@interface GetRedPacketStoryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) RedPacketStoryInfo *info;
@property (nonatomic) unsigned int subtypeId;
@property (nonatomic) unsigned int localUpdateTime;

+ (void)initialize;

@end
