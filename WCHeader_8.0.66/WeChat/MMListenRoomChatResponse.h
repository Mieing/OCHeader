@class MMListenRoomMessage, BaseResponse;

@interface MMListenRoomChatResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenRoomMessage *message;

+ (void)initialize;

@end
