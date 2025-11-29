@class NSString;

@interface HTSLiveGiftCommentGuideTextAuditContent : IESLivePBBaseMessage

@property (nonatomic) int changeType;
@property (copy, nonatomic) NSString *guideText;

+ (id)descriptor;

@end
