@class BaseRequest;

@interface VoIPLCKRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long firstReqTimestamp;

+ (void)initialize;

@end
