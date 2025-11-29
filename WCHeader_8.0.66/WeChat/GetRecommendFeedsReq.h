@class BaseRequest, NSData, RecommendFeedsContext;

@interface GetRecommendFeedsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *buffer;
@property (retain, nonatomic) RecommendFeedsContext *context;

+ (void)initialize;

@end
