@interface VoiceChatBootConfigReq : IESLivePBBaseMessage

@property (nonatomic) long long appId;
@property (nonatomic) long long wgmUserId;
@property (nonatomic) long long authorId;

+ (id)descriptor;

@end
