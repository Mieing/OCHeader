@class BaseRequest;

@interface GetStepListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;

+ (void)initialize;

@end
