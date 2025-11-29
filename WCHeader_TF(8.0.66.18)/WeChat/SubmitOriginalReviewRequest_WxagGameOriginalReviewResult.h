@class NSString;

@interface SubmitOriginalReviewRequest_WxagGameOriginalReviewResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *questionId;
@property (nonatomic) BOOL isRejectAnswer;
@property (nonatomic) unsigned int optionId;

+ (void)initialize;

@end
