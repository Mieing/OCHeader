@class NSMutableArray;

@interface GetWorldChatMsgResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *worldChatMsgListArray;
@property (readonly, nonatomic) unsigned long long worldChatMsgListArray_Count;

+ (id)descriptor;

@end
