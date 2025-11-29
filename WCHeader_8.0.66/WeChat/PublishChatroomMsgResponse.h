@class TopicInfo, BaseResponse;

@interface PublishChatroomMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) TopicInfo *topicInfo;

+ (void)initialize;

@end
