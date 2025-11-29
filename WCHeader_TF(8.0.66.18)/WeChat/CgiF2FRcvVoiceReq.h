@class BaseRequest, NSData, NSString;

@interface CgiF2FRcvVoiceReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSData *prefix;
@property (retain, nonatomic) NSData *suffix;
@property (retain, nonatomic) NSString *outtradeno;

+ (void)initialize;

@end
