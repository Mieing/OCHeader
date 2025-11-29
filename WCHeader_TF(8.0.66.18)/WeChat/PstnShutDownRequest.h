@class BaseRequest, NSString;

@interface PstnShutDownRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUserName;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long callSeq;
@property (nonatomic) unsigned int status;

+ (void)initialize;

@end
