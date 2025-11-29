@class BaseRequest, BizRecFinderNativeCardLite, BizRecArticleCardLite;

@interface BizRecommendArticleReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) BizRecArticleCardLite *recCard;
@property (retain, nonatomic) BizRecFinderNativeCardLite *finderNativeCard;

+ (void)initialize;

@end
