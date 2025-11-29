@class NSMutableArray, BaseResponse;

@interface BizRecommendCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *recCard;
@property (nonatomic) unsigned int refreshIntervalSec;

+ (void)initialize;

@end
