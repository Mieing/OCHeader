@class SecretChatResponse_ChannelInfo, SecretChatResponse_SecretChatInfo;

@interface SecretChatResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) SecretChatResponse_SecretChatInfo *secretChatResp;
@property (nonatomic) BOOL hasSecretChatResp;
@property (retain, nonatomic) SecretChatResponse_ChannelInfo *secretChatChannel;
@property (nonatomic) BOOL hasSecretChatChannel;

+ (id)descriptor;

@end
