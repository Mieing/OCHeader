@class BaseRequest, NSString;

@interface MMVisionRelatedWordReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int useruin;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *region;

+ (void)initialize;

@end
