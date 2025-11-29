@class GetSecretChatMsgResponse_ResponseData;

@interface GetSecretChatMsgResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetSecretChatMsgResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
