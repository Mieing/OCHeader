@class NSString;

@interface CloseVoiceChatReq : IESLivePBBaseMessage

@property (nonatomic) long long appId;
@property (nonatomic) long long wgmUserId;
@property (nonatomic) long long sessionId;
@property (nonatomic) int reason;
@property (copy, nonatomic) NSString *reqFrom;
@property (copy, nonatomic) NSString *details;

+ (id)descriptor;

@end
