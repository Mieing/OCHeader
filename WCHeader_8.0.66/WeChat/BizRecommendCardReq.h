@class BaseRequest, NSMutableArray;

@interface BizRecommendCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *recCard;

+ (void)initialize;

@end
