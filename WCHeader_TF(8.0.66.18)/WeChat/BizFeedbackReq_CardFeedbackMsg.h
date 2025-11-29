@class NSMutableArray;

@interface BizFeedbackReq_CardFeedbackMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *feedbackInfo;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NSMutableArray *exposedFeedbackInfo;

+ (void)initialize;

@end
