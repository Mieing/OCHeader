@class NSString, NSMutableArray;

@interface AWEMVUGDiversionService : HTSService <AWEMVUGDiversionService>

@property (retain, nonatomic) NSMutableArray *coldLaunchAwemeModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInstalledJXApp;
+ (void)launchJXAppWithSourceGID:(id)a0 sourceType:(id)a1 zlink:(id)a2 channelID:(id)a3 basicSchema:(id)a4;
+ (void)openJXAppStoreWithSourceGID:(id)a0 sourceType:(id)a1 zlink:(id)a2 channelID:(id)a3 basicSchema:(id)a4;

- (id)createSelectUGBottomBarContext;
- (void)preloadUGBottomBarIfNeeded:(id)a0;
- (BOOL)isSupportedUGBottomBarReferString:(id)a0 enterFrom:(id)a1;
- (void)addCacheForAwemeModel:(id)a0;
- (id)cachedAwemeModelForItemID:(id)a0;
- (id)aweRelatedVideoJXDiversionViewWithModel:(id)a0 withPageContext:(id)a1;
- (BOOL)canShowRelatedVideoJXDiversionView:(id)a0 withAwemeModel:(id)a1 withPageContext:(id)a2;
- (void)saveJingxuanWeeklyLabelInfo:(id)a0 withLabelModel:(id)a1 withReferString:(id)a2;
- (void).cxx_destruct;

@end
