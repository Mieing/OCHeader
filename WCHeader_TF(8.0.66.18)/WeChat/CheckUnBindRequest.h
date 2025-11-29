@class BaseRequest;

@interface CheckUnBindRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int bindType;

+ (void)initialize;

@end
