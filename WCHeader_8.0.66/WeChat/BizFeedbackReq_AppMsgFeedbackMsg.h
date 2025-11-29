@class NSString, NSMutableArray;

@interface BizFeedbackReq_AppMsgFeedbackMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *feedbackInfo;
@property (retain, nonatomic) NSString *appMsgUrl;
@property (retain, nonatomic) NSMutableArray *exposedFeedbackInfo;

+ (void)initialize;

@end
