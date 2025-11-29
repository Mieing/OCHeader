@class StickerBattleInfo, RoleInfo, BattleStickerConfig, LiveInfo;

@interface BattleInfoDisplayStickerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) RoleInfo *roleInfo;
@property (nonatomic) BOOL hasRoleInfo;
@property (retain, nonatomic) LiveInfo *liveInfo;
@property (nonatomic) BOOL hasLiveInfo;
@property (retain, nonatomic) StickerBattleInfo *battleInfo;
@property (nonatomic) BOOL hasBattleInfo;
@property (retain, nonatomic) BattleStickerConfig *battleStickerConfig;
@property (nonatomic) BOOL hasBattleStickerConfig;

+ (id)descriptor;

@end
