@class BaseResponse;

@interface ChatRoomTopMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int topId;

+ (void)initialize;

@end
