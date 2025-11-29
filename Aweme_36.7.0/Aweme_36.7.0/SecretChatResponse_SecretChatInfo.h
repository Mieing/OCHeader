@class NSString, HTSLiveText;

@interface SecretChatResponse_SecretChatInfo : IESLivePBBaseMessage

@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (copy, nonatomic) NSString *msgIdStr;

+ (id)descriptor;

@end
