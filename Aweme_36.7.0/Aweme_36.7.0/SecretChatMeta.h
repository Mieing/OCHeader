@class NSString;

@interface SecretChatMeta : IESLivePBBaseMessage

@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long eventTime;
@property (nonatomic) long long fromUid;
@property (nonatomic) long long toUid;
@property (copy, nonatomic) NSString *fromUserOpenid;
@property (copy, nonatomic) NSString *toUserOpenid;

+ (id)descriptor;

@end
