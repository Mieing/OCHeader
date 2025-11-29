@class BaseRequest;

@interface HKPayPluginRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long timestamp;

+ (void)initialize;

@end
