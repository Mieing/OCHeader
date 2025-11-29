@class BaseRequest, NSMutableArray;

@interface RecommendFeedsFeedbackReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *recommendCard;
@property (nonatomic) unsigned int sessionId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
