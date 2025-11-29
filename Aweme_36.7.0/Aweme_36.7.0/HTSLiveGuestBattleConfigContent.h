@interface HTSLiveGuestBattleConfigContent : IESLivePBBaseMessage

@property (nonatomic) int isAnchorInvolved;
@property (nonatomic) long long lastBattleDurationByAnchor;
@property (nonatomic) long long loserNum;
@property (nonatomic) long long scoreType;
@property (nonatomic) long long uiType;
@property (nonatomic) int chestGameSwitch;

+ (id)descriptor;

@end
