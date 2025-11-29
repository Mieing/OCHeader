@class BaseResponse;

@interface AppMsgOperateCommentResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int personalCommentId;
@property (nonatomic) unsigned int replyId;

+ (void)initialize;

@end
