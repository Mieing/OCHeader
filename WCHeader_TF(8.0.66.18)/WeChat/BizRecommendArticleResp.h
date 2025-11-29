@class BizRecArticleCard, BizRecFinderNativeCard, BaseResponse;

@interface BizRecommendArticleResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) BizRecArticleCard *recCard;
@property (nonatomic) unsigned int refreshIntervalSec;
@property (retain, nonatomic) BizRecFinderNativeCard *finderNativeCard;

+ (void)initialize;

@end
