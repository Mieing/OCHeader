@interface AWEDanmakuActivityUtil : NSObject

+ (id)danmakuPendantActivityConfigWithID:(id)a0;
+ (id)danmakuEggActivityConfigWithID:(id)a0;
+ (id)localResourceVersion;
+ (id)pendantURLRecords;
+ (int)getRandomNumber:(int)a0 to:(int)a1;
+ (BOOL)isLocalGeckoResourceLastest;
+ (void)loadDanmakuActivityGeckoResource;
+ (BOOL)danmakuActivityResourceExist;
+ (id)randDomPick:(id)a0 weights:(id)a1;
+ (id)pickRandomPendantMaterialWithModel:(id)a0;
+ (id)danmakuGuideActivityConfigWithID:(long long)a0;
+ (BOOL)canMatchPatternWithContent:(id)a0 effectForAll:(BOOL)a1 matchList:(id)a2 includeList:(id)a3;
+ (void)trackActivityMatchedDanmakuPost:(id)a0 awemeModel:(id)a1 activityID:(id)a2 addPendantSuccess:(BOOL)a3;
+ (id)pickRandomEggMaterialWithModel:(id)a0;
+ (void)trackDanmakuEggShowSuccess:(BOOL)a0 msg:(id)a1;
+ (id)fetchDanmakuActivityConfigUrl;
+ (id)pendantActivityModels;
+ (id)guideActivityModels;
+ (id)eggActivityModels;
+ (void)trackDanmakuGeckoResourceResultIfNeed;
+ (void)trackDanmakuPendantUseURL:(id)a0 activityID:(id)a1;
+ (void)loadDanmakuActivityGeckoResourceAfterLaunch;
+ (BOOL)shouldUpdateDanmakuActivityResource;
+ (id)pendantMaterialWithPendantID:(id)a0 materialID:(id)a1;
+ (id)danmakuMaterialPathWithMaterialName:(id)a0 channelName:(id)a1;
+ (id)obtainPendantMaterialBeforePublish:(id)a0;
+ (id)obtainGuideActivityModel:(id)a0;
+ (BOOL)needShowGuideActivityDanmaku:(id)a0;
+ (void)configActivityForNewPublishDanmaku:(id)a0 awemeModel:(id)a1 needShowEgg:(BOOL)a2;
+ (BOOL)supportDanmakuActivityWithModel:(id)a0 activityType:(long long)a1;
+ (void)fetchDanmakuActivityConfigIfNeeded;

@end
