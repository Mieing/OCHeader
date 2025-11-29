@class NSString;

@interface TIMXPBNConversationUpdateBotResponseBody : GPBMessage

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;

+ (id)descriptor;

@end
