@class BaseRequest;

@interface QueryHasPswdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int scene;

+ (void)initialize;

@end
