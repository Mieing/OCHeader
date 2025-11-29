@class NSString, NSData, BaseResponse;

@interface CgiF2FRcvVoiceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSData *voice;
@property (nonatomic) unsigned int voiceType;
@property (nonatomic) unsigned int overtimeFlag;

+ (void)initialize;

@end
