@class BaseRequest, NSString, RecommendRingBackContext;

@interface GetRecommendRingBackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int pullType;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) RecommendRingBackContext *context;
@property (retain, nonatomic) NSString *expBuf;

+ (void)initialize;

@end
