@class NSString, BaseResponse;

@interface FinderLiveApplyMicWithAudienceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *realnameUrl;
@property (nonatomic) unsigned long long serverMsgId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long confirmExpiredTime;

+ (void)initialize;

@end
