@class NSString, NSMutableArray;

@interface RecommendFeedsFeedbackReq_RecommendCardLite : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *extraData;
@property (nonatomic) unsigned long long clientMsgId;
@property (retain, nonatomic) NSMutableArray *negativeFeedbackReason;
@property (retain, nonatomic) NSMutableArray *exposedNegativeFeedbackReason;

+ (void)initialize;

@end
