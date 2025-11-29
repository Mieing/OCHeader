@class BaseRequest, NSString;

@interface GetProfileSubBizRecommendReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizusername;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
