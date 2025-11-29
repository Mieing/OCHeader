@class NSString, HTSLiveUser;

@interface HTSLiveLinkerFollowStrongGuideContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) int fromUserType;

+ (id)descriptor;

@end
