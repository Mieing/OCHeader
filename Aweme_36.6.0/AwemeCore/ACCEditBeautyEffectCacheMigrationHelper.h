@class ACCEditBeautyEffectComposerCacheViewModel;

@interface ACCEditBeautyEffectCacheMigrationHelper : NSObject

@property (retain, nonatomic) ACCEditBeautyEffectComposerCacheViewModel *aweCacheManager;

- (void)p_setupOldCacheManager;
- (void)p_migrateDataIfNeededWithCacheManager:(id)a0 itemModels:(id)a1 rootNode:(id)a2 gender:(long long)a3;
- (id)p_generateValueCacheKeyForOldCacheWithresourceID:(id)a0 tag:(id)a1 gender:(long long)a2;
- (long long)convertToAWEGenderFromCKGender:(long long)a0;
- (id)migrateCacheFromOldToNewWithItemModels:(id)a0 rootNode:(id)a1 gender:(long long)a2;
- (void)migrateDataIfNeededWithCacheManager:(id)a0 itemModels:(id)a1 rootNode:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
