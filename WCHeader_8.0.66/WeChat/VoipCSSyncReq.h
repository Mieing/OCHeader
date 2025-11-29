@class BaseRequest;

@interface VoipCSSyncReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int notifySeq;

+ (void)initialize;

@end
