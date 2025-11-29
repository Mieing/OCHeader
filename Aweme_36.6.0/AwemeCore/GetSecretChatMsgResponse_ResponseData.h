@class NSMutableArray;

@interface GetSecretChatMsgResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *secretChatMsgListArray;
@property (readonly, nonatomic) unsigned long long secretChatMsgListArray_Count;

+ (id)descriptor;

@end
