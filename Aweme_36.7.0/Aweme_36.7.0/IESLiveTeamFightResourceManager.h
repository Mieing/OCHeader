@class NSArray, IESEffectModel;
@protocol IESLiveTeamFightBaseProvider;

@interface IESLiveTeamFightResourceManager : IESLiveMultiBaseResourceManager

@property (copy, nonatomic) NSArray *teamFightEffects;
@property (retain, nonatomic) IESEffectModel *winnerMVPSticker;
@property (retain, nonatomic) IESEffectModel *loserMVPSticker;
@property (copy, nonatomic) id /* block */ winnerMVPBlock;
@property (copy, nonatomic) id /* block */ loserMVPBlock;
@property (weak, nonatomic) id<IESLiveTeamFightBaseProvider> provider;

- (id)initWithDIContext:(id)a0 provider:(id)a1;
- (void)monitorDressConfigErrorWithStatus:(long long)a0 error:(id)a1;
- (id)winnerMVPCrownIcon;
- (id)loserMVPCrownIcon;
- (id)scoreBarIcon;
- (void)downloadTeamFightEffects;
- (id)winnerConfig;
- (id)loserConfig;
- (id)sliverEffectName;
- (void)downloadTeamFightStickerIfNeeded:(id)a0;
- (id)goldEffectName;
- (void)winnerSticker:(id /* block */)a0;
- (void)loserSticker:(id /* block */)a0;
- (void)monitorDownloadResultEffect:(id)a0 error:(id)a1;
- (id)fansticketIcon:(long long)a0 role:(int)a1;
- (id)winnerMVPAnim;
- (id)loserMVPAnim;
- (void)cleanTeamFightEffectComplete;
- (void).cxx_destruct;

@end
