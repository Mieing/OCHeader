@class NSMutableArray, BaseResponse;

@interface GetChatroomMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *msgPackList;

+ (void)initialize;

@end
