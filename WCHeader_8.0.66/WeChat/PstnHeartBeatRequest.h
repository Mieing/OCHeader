@class BaseRequest;

@interface PstnHeartBeatRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long callSeq;

+ (void)initialize;

@end
