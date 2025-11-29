@class NSString;

@interface HTSLiveLinkerUpdateLinkTypeReplyContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) int replyType;
@property (copy, nonatomic) NSString *replyPrompts;

+ (id)descriptor;

@end
