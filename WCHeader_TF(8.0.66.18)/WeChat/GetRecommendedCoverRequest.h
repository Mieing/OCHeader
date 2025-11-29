@class BaseRequest, NSString;

@interface GetRecommendedCoverRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *inputContent;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
