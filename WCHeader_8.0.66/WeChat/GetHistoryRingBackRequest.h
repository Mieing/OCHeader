@class BaseRequest;

@interface GetHistoryRingBackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long cliMinSeq;

+ (void)initialize;

@end
