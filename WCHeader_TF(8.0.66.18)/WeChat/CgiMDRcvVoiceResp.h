@class NSString, NSData, BaseResponse;

@interface CgiMDRcvVoiceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSData *voice;
@property (nonatomic) unsigned int voiceType;

+ (void)initialize;

@end
