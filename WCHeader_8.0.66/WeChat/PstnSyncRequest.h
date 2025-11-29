@class BaseRequest, NSString;

@interface PstnSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fromUsername;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int calledStatusSyncKey;
@property (nonatomic) unsigned long long callSeq;
@property (nonatomic) unsigned int dataFlag;

+ (void)initialize;

@end
