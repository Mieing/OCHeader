@class NSString;

@interface HTSLiveLinkerCrossLinkFinishContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *finishToast;
@property (copy, nonatomic) NSString *guestFinishToast;
@property (nonatomic) int reason;
@property (nonatomic) long long finishRoomId;
@property (copy, nonatomic) NSString *finishUserId;

+ (id)descriptor;

@end
