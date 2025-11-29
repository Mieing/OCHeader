@class NSString;

@interface HTSLiveLinkmicRoomBattleReplyContent : IESLivePBBaseMessage

@property (nonatomic) int replyType;
@property (nonatomic) int startType;
@property (nonatomic) long long inviteeRoomId;
@property (copy, nonatomic) NSString *inviteeAnchorId;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *replyUserId;
@property (copy, nonatomic) NSString *replyToast;
@property (nonatomic) int replyOperate;
@property (nonatomic) int scoreType;

+ (id)descriptor;

@end
