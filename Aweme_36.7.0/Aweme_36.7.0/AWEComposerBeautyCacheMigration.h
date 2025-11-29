@class NSNumber, AWEComposerBeautyCacheViewModel, NSString;

@interface AWEComposerBeautyCacheMigration : NSObject <AWEComposerBeautyMigrationProtocol>

@property (retain, nonatomic) AWEComposerBeautyCacheViewModel *beautyCacheManager;
@property (retain, nonatomic) NSNumber *lastABGroup;
@property (retain, nonatomic) NSString *panelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)migrationCacheKeyWithPanelName:(id)a0;
+ (BOOL)needUpdateCacheWithPanelName:(id)a0;
+ (void)markMigrationCompleteWithPanelName:(id)a0;

- (id)initWithCacheManager:(id)a0 panelName:(id)a1;
- (void)migrateAppliedEffectListWithCategories:(id)a0;
- (void)migrateAppliedEffectItemWithCategories:(id)a0;
- (void)migrateAppliedEffectForCategory:(id)a0;
- (void)migrateAppliedChildEffect:(id)a0;
- (void)migrateEffectItem:(id)a0 inEffect:(id)a1;
- (void)migrateAppliedEffectForCategory:(id)a0 forGender:(long long)a1;
- (id)oldCacheKeyForCategory:(id)a0 gender:(long long)a1;
- (void)migrateAppliedChildEffect:(id)a0 forGender:(long long)a1;
- (id)oldCacheKeyForEffect:(id)a0 gender:(long long)a1;
- (void)migrateEffectItem:(id)a0 inEffect:(id)a1 forGender:(long long)a2;
- (id)oldCacheKeyForEffectItem:(id)a0 inEffect:(id)a1 gender:(long long)a2;
- (id)ratioNumberForTag_920:(id)a0;
- (void)migrateAppliedEffectsWithEffects:(id)a0 forGender:(long long)a1;
- (void)startCacheDataMigration:(id)a0 lastABGroup:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
