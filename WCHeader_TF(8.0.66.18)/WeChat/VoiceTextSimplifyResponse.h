@class NSData, BaseResponse;

@interface VoiceTextSimplifyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *sessionId;

+ (void)initialize;

@end
