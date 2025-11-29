@class BaseRequest, NSString, VoiceAttr;

@interface CheckVoiceTransRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *voiceId;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int msgId;
@property (retain, nonatomic) VoiceAttr *voiceAttr;
@property (nonatomic) unsigned long long newMsgId;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *fromUserName;
@property (retain, nonatomic) NSString *toUserName;

+ (void)initialize;

@end
