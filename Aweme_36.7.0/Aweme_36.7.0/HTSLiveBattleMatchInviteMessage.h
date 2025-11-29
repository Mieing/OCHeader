@class NSString, HTSLiveCommon, BattleLinkerInviteMessageExtra;

@interface HTSLiveBattleMatchInviteMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *fromUserId;
@property (nonatomic) long long fromRoomId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) long long toRoomId;
@property (nonatomic) int inviteType;
@property (nonatomic) int matchType;
@property (nonatomic) long long waitSec;
@property (copy, nonatomic) NSString *clientAttachedInfo;
@property (retain, nonatomic) BattleLinkerInviteMessageExtra *messageExtra;
@property (nonatomic) BOOL hasMessageExtra;
@property (copy, nonatomic) NSString *battleAttachedInfo;

+ (id)descriptor;

@end
