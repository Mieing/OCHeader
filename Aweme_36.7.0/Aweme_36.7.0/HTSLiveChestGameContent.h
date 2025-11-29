@class HTSLiveChestGameSetting;

@interface HTSLiveChestGameContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveChestGameSetting *guestBattleChestSetting;
@property (nonatomic) BOOL hasGuestBattleChestSetting;

+ (id)descriptor;

@end
