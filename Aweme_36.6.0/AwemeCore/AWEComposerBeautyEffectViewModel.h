@class AWEComposerBeautyEffectWrapper, NSString, NSArray, AWEComposerBeautyEffectKeys, AWEComposerBeautyCacheViewModel, NSMutableArray, NSNumber;
@protocol AWEComposerBeautyMigrationProtocol, AWEComposerBeautyDataHandleProtocol;

@interface AWEComposerBeautyEffectViewModel : NSObject

@property (readonly, nonatomic) NSString *panelName;
@property (retain, nonatomic) NSMutableArray *appliedEffects;
@property (copy, nonatomic) NSArray *availableEffects;
@property (retain, nonatomic) AWEComposerBeautyEffectWrapper *placeHolderEffectForFilter;
@property (nonatomic) long long currentGender;
@property (nonatomic) long long cameraPosition;
@property (retain, nonatomic) AWEComposerBeautyEffectKeys *effectKeysObj;
@property (retain, nonatomic) AWEComposerBeautyCacheViewModel *cacheObj;
@property (retain, nonatomic) id<AWEComposerBeautyMigrationProtocol> cacheMigrationManager;
@property (retain, nonatomic) id<AWEComposerBeautyDataHandleProtocol> dataHandler;
@property (retain, nonatomic) NSNumber *lastABGroup;
@property (nonatomic) BOOL isPaternityEnabled;
@property (readonly, copy, nonatomic) NSArray *currentEffects;
@property (readonly, copy, nonatomic) NSArray *effectsBeforeFilter;
@property (readonly, copy, nonatomic) NSArray *effectsAfterFilter;
@property (nonatomic) BOOL didModifyStatus;
@property (nonatomic, getter=isMultiSlider) BOOL multiSlider;

- (id)initWithCacheViewModel:(id)a0 panelName:(id)a1;
- (void)updateAppliedEffectsWithCategories:(id)a0;
- (void)updateWithGender:(long long)a0;
- (void)updateAppliedFilter:(id)a0;
- (void)updateWithGender:(long long)a0 cameraPosition:(long long)a1;
- (void)bringFilterToFront;
- (void)updateAvailableEffectsWithCategories:(id)a0;
- (void)filterCategories:(id)a0 withGender:(long long)a1 cameraPosition:(long long)a2 completion:(id /* block */)a3;
- (void)updateSelectedEffect:(id)a0 forCategory:(id)a1;
- (void)updateAppliedChildEffect:(id)a0 forEffect:(id)a1;
- (id)initWithCacheViewModel:(id)a0 panelName:(id)a1 migrationHandler:(id)a2 dataHandler:(id)a3;
- (void)updateAppliedChildEffect:(id)a0 forEffect:(id)a1 gender:(long long)a2;
- (void)prepareDataSource;
- (void)p_bindPaternityWithCategories:(id)a0;
- (void)p_addNoneCateogryToParentCateogries:(id)a0;
- (id)namesArrayOfCategories:(id)a0;
- (void)p_updateCategoriesWithResponse:(id)a0 completion:(id /* block */)a1;
- (id)findParentCategoryIn:(id)a0 forCategory:(id)a1;
- (id)p_generateNoneCategory;
- (void)p_fetchCategoriesAndEffects:(id /* block */)a0;
- (void)loadCachedEffectsWithCompletion:(id /* block */)a0;
- (BOOL)canShowCategory:(id)a0 withGender:(long long)a1;
- (void)addEffectWrapperToAppliedEffects:(id)a0;
- (void)removeEffectWrapperFromAppliedEffects:(id)a0;
- (void)cacheAppliedEffects;
- (void)removeEffectsArrayFromAppliedEffects:(id)a0;
- (void)addEffectsArrayToAppliedEffects:(id)a0;
- (void)bringEffectWrapperToFront:(id)a0;
- (void)enablePaternity;
- (void)clearAppliedEffects;
- (void)fetchUpdatedEffectsForce:(BOOL)a0 completion:(id /* block */)a1;
- (void)bringEffectWrapperToEnd:(id)a0;
- (void)updateEffectRatioFromCache:(id)a0;
- (void)updateSelectedChildCateogry:(id)a0 lastChildCategory:(id)a1 forPrimaryCategory:(id)a2;
- (id)appliedIdsWithArray:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
