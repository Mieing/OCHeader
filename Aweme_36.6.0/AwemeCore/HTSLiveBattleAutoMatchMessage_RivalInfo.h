@class NSString, HTSLiveRoom;

@interface HTSLiveBattleAutoMatchMessage_RivalInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) BOOL hasRoom;

+ (id)descriptor;

@end
