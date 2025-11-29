@class NSString;

@interface VoiceChatStartButton : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long privilegeSource;

+ (id)descriptor;

@end
