@class BaseRequest;

@interface GetStoreRecListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long sessionId;

+ (void)initialize;

@end
