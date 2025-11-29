@class NSString;

@interface HTSLiveGiftCommentAuditContent : IESLivePBBaseMessage

@property (nonatomic) int changeType;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
