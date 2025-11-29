@class NSString;

@interface HTSLiveLinkerConfirmUnsilenceContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (nonatomic) long long fromRoomId;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
