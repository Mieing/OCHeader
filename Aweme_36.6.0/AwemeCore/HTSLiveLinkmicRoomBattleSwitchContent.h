@interface HTSLiveLinkmicRoomBattleSwitchContent : IESLivePBBaseMessage

@property (nonatomic) int startType;
@property (nonatomic) long long inviteeRoomId;
@property (nonatomic) long long inviteRoomId;
@property (nonatomic) int fromScoreType;
@property (nonatomic) int toScoreType;

+ (id)descriptor;

@end
