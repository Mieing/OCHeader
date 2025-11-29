@class NSString;

@interface HTSLiveRoomBattleProcessWaitingBattleContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *toast;
@property (nonatomic) long long selectGuestsWaitingSec;

+ (id)descriptor;

@end
