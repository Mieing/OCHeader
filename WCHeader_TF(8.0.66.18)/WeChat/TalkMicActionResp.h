@class BaseResponse;

@interface TalkMicActionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int micSeq;
@property (nonatomic) unsigned int channelId;

+ (void)initialize;

@end
