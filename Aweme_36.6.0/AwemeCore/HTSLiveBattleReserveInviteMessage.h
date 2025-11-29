@class NSString, HTSLiveCommon, BattleReserveOption, NSMutableArray, HTSLiveRoom;

@interface HTSLiveBattleReserveInviteMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long fromUserId;
@property (nonatomic) long long fromRoomId;
@property (nonatomic) long long toUserId;
@property (nonatomic) long long toRoomId;
@property (nonatomic) long long waitSec;
@property (copy, nonatomic) NSString *clientAttachedInfo;
@property (copy, nonatomic) NSString *reserveId;
@property (retain, nonatomic) HTSLiveRoom *inviteRoom;
@property (nonatomic) BOOL hasInviteRoom;
@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) BattleReserveOption *option;
@property (nonatomic) BOOL hasOption;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (copy, nonatomic) NSString *fromOpenId;
@property (copy, nonatomic) NSString *toOpenId;

+ (id)descriptor;

@end
