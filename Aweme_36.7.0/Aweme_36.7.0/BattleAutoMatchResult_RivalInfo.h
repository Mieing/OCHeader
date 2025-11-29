@class NSString, HTSLiveRoom;

@interface BattleAutoMatchResult_RivalInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;
@property (copy, nonatomic) NSString *userIdStr;

+ (id)descriptor;

@end
