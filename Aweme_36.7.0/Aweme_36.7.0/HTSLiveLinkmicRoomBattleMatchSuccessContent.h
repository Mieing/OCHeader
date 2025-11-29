@class NSString, HTSLiveRoomBattleProcessInfo;

@interface HTSLiveLinkmicRoomBattleMatchSuccessContent : IESLivePBBaseMessage

@property (nonatomic) int matchType;
@property (retain, nonatomic) HTSLiveRoomBattleProcessInfo *processInfo;
@property (nonatomic) BOOL hasProcessInfo;
@property (copy, nonatomic) NSString *rivalAnchorId;
@property (nonatomic) long long rivalUserCount;
@property (nonatomic) long long rivalChatRoomRank;
@property (nonatomic) long long rivalFollowStatus;
@property (nonatomic) long long inviteSource;
@property (copy, nonatomic) NSString *operatorUserId;

+ (id)descriptor;

@end
