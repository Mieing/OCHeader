@class SecretChatResponse_ResponseData;

@interface SecretChatResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SecretChatResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
