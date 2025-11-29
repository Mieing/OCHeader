@class BaseRequest;

@interface GetServiceNotifyOptionsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int requestType;
@property (nonatomic) unsigned int begin;
@property (nonatomic) unsigned int limit;

+ (void)initialize;

@end
