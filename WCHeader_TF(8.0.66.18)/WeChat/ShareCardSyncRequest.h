@class BaseRequest;

@interface ShareCardSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long maxSeq;

+ (void)initialize;

@end
