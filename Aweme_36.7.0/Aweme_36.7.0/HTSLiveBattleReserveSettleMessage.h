@class NSString, HTSLiveCommon, HTSLiveRoom;

@interface HTSLiveBattleReserveSettleMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *fromUserId;
@property (nonatomic) long long fromRoomId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) long long toRoomId;
@property (nonatomic) long long waitSec;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (copy, nonatomic) NSString *reserveId;
@property (retain, nonatomic) HTSLiveRoom *toRoom;
@property (nonatomic) BOOL hasToRoom;
@property (copy, nonatomic) NSString *tips;

+ (id)descriptor;

@end
