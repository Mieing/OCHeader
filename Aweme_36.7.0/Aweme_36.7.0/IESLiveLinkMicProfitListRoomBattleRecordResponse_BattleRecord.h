@class HTSLiveUser;

@interface IESLiveLinkMicProfitListRoomBattleRecordResponse_BattleRecord : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *rivalUser;
@property (nonatomic) BOOL hasRivalUser;
@property (nonatomic) long long finishTime;
@property (nonatomic) int battleResult;
@property (nonatomic) long long createTime;

+ (id)descriptor;

@end
