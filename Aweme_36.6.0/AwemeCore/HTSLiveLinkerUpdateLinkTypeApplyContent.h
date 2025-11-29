@class NSString;

@interface HTSLiveLinkerUpdateLinkTypeApplyContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) int linkType;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *ackMessage;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) int showType;
@property (nonatomic) BOOL clientNoToast;

+ (id)descriptor;

@end
