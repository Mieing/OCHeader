@class NSMutableArray;

@interface GetChatMentionMsgResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;

+ (id)descriptor;

@end
