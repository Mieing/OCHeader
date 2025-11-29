@class BaseRequest;

@interface SnsStickyOnTopRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long feedId;
@property (nonatomic) unsigned int action;

+ (void)initialize;

@end
