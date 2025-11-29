@class NSMutableArray, BaseResponse;

@interface GetChatToolMsgInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *chattoolMsgList;

+ (void)initialize;

@end
