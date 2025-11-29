@class BaseRequest;

@interface MMListenMembershipGetInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) BOOL allowCache;

+ (void)initialize;

@end
