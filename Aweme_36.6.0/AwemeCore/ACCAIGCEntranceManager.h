@class NSString;

@interface ACCAIGCEntranceManager : NSObject <AWEStudioAIGCEntranceUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enterFriendLoraWithSticker:(id)a0 effectModel:(id)a1 darkMode:(id)a2 extraDict:(id)a3;
+ (id)generateAIGCUGCFusionParamWithAweme:(id)a0 effect:(id)a1 stickerDetail:(id)a2 isCustomPath:(BOOL)a3 enterFrom:(id)a4;
+ (BOOL)checkSupportAIGCUGCFusionWithStickerDetail:(id)a0 effect:(id)a1 aigcUgcFusionParam:(id)a2;
+ (void)createUGCFusionAlbumWith:(id)a0 showLoraHeaderView:(BOOL)a1 shouldShowCamera:(BOOL)a2 extensionDic:(id)a3 enterBlock:(id /* block */)a4 shouldSelectedBlock:(id /* block */)a5 completeSelectBlock:(id /* block */)a6 completeShootBlock:(id /* block */)a7 useLoraBlock:(id /* block */)a8 dismissBlock:(id /* block */)a9 loraProfileDidSelectBlock:(id /* block */)a10;
+ (void)openMediaReferenceAlbumWith:(id)a0 extensionDic:(id)a1 enterBlock:(id /* block */)a2 shouldSelectedBlock:(id /* block */)a3 completeSelectBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5 albumConfigBuilder:(id /* block */)a6;
+ (void)entranceAIGCType:(long long)a0 isFromType:(long long)a1 publishViewModel:(id)a2 extensionDic:(id)a3 enterBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5;
+ (void)updateEnterCameraPreviousPageIfNeededWithPublishViewModel:(id)a0;
+ (BOOL)isHitFollowSceneWithPublishViewModel:(id)a0;
+ (void)appendMetricsInfoToIESEffectModel:(id)a0 fromBizExtraStr:(id)a1;
+ (BOOL)checkForbidFromAIFollowShoot:(id)a0;
+ (void)parseUGCFusionParamsWithPublishViewModel:(id)a0 info:(id)a1;
+ (BOOL)shouldEnterAIGCUGCFusionPageWithPublishViewModel:(id)a0;
+ (BOOL)shouldDirectEnterAIGCUGCFusionPageWithPublishViewModel:(id)a0;
+ (void)handleAddChallengeEffectModel:(id)a0 publishViewModel:(id)a1;
+ (void)handleMusicEffectModel:(id)a0 publishViewModel:(id)a1;
+ (void)preloadAIloraicon;
+ (void)enterAIGCMultiLoraSelectPageWithEffectId:(id)a0 effectModel:(id)a1 publishViewModel:(id)a2;
+ (void)startAIGCLoraPageWithPublishViewModel:(id)a0 loraType:(unsigned long long)a1 enterBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;
+ (void)privateEntranceAIGCType:(long long)a0 isFromType:(long long)a1 publishViewModel:(id)a2 extensionDic:(id)a3 enterBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5;
+ (void)requestSupportASyncQueueeffectId:(id)a0;
+ (void)handleAISuiteCreatType:(long long)a0 isFromType:(long long)a1 publishViewModel:(id)a2 extensionDic:(id)a3 enterBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5;
+ (void)handleMultiStyleCreateType:(long long)a0 isFromType:(long long)a1 publishViewModel:(id)a2 extensionDic:(id)a3 enterBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5;
+ (void)preloadEffectDataPublishViewModel:(id)a0;
+ (void)trackNetWorkBuriedkeyNetworkTabDuration:(double)a0 Error:(id)a1 hitCache:(BOOL)a2;
+ (void)preloadEffectModel:(id)a0 with:(id)a1;
+ (id)getHotPanelEffectList:(id)a0 tabTitle:(id)a1;
+ (void)ensureAIGCLoraProfileValidWith:(id)a0 multiIM:(BOOL)a1 block:(id /* block */)a2 enterScene:(long long)a3 darkMode:(id)a4;
+ (void)ensureAIGCLoraProfileModelExistWithBlock:(id /* block */)a0;
+ (void)friendLoraGetEffectWith:(id)a0 effectModel:(id)a1 profileInfo:(id)a2 darkMode:(id)a3 trackInfo:(id)a4;
+ (void)enterSelectPersonNumberVCWith:(id)a0 profileInfo:(id)a1 darkMode:(id)a2 trackInfo:(id)a3;
+ (void)enterFriendSharePageWith:(id)a0 loraStyleId:(id)a1 profileInfo:(id)a2 personNumber:(long long)a3 imageUrl:(id)a4 trackInfo:(id)a5 dark:(long long)a6;
+ (void)entranceAIGCType:(long long)a0 isFromType:(long long)a1 publishViewModel:(id)a2 extensionDic:(id)a3 finishBlock:(id /* block */)a4;


@end
