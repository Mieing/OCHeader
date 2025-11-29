@class NSString;

@interface HTSLiveLinkerPrepareReplyContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (nonatomic) long long fromRoomId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) int replyType;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
