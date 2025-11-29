@class NSString, NSMutableArray;

@interface BizFeedbackReq_BizFeedbackMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *feedbackInfo;
@property (retain, nonatomic) NSString *bizUserName;
@property (retain, nonatomic) NSMutableArray *exposedFeedbackInfo;

+ (void)initialize;

@end
