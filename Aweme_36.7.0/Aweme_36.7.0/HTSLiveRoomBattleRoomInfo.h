@class NSString;

@interface HTSLiveRoomBattleRoomInfo : IESLivePBBaseMessage

@property (nonatomic) long long id_p;
@property (nonatomic) int joinStatus;
@property (copy, nonatomic) NSString *startOperatorUserId;

+ (id)descriptor;

@end
