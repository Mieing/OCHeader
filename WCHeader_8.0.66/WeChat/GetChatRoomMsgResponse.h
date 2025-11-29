@class NSMutableArray, BaseResponse;

@interface GetChatRoomMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *addMsgList;

+ (void)initialize;

@end
