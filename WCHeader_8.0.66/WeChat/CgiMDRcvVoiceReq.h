@class BaseRequest, NSData, NSString;

@interface CgiMDRcvVoiceReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSData *prefix;
@property (retain, nonatomic) NSData *suffix;
@property (retain, nonatomic) NSString *outtradeno;
@property (nonatomic) unsigned int voiceType;

+ (void)initialize;

@end
