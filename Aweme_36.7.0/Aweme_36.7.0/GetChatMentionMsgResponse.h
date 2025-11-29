@class GetChatMentionMsgResponse_ResponseData;

@interface GetChatMentionMsgResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetChatMentionMsgResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
