@class NSArray;
@protocol ACCGenericEffectPanelMaterialFetcherDelegate;

@interface ACCGenericEffectPanelSectionManager : NSObject

@property (copy, nonatomic) NSArray *usedStickers;
@property (copy, nonatomic) NSArray *lastFetchUsedStickers;
@property (copy, nonatomic) id /* block */ stickerFilterBlock;
@property (nonatomic) BOOL isTeenMode;
@property (weak, nonatomic) id<ACCGenericEffectPanelMaterialFetcherDelegate> materialFetcherDelegate;

+ (id)sectionNameMap;
+ (BOOL)isSameSectionWithSticker:(id)a0 otherSticher:(id)a1;
+ (void)cacheStickerWithSticker:(id)a0 cacheKey:(id)a1;
+ (id)getEffectID:(id)a0;
+ (unsigned long long)getEffectType:(id)a0;
+ (id)getEffectName:(id)a0;

- (BOOL)isSectionEnabledWithCategory:(id)a0;
- (void)p_fetchUsedEffectsWithCategory:(id)a0 completion:(id /* block */)a1;
- (void)p_getEffectsWithCacheKey:(id)a0 completion:(id /* block */)a1;
- (void)generateUsedSectionToFavorite:(id)a0;
- (void)fetchUsedEffectsWithCategory:(id)a0 completion:(id /* block */)a1;
- (void)generateUsedSectionToFavorite:(id)a0 stickers:(id)a1 finishCompletion:(id /* block */)a2;
- (id)p_getStickerDictListFromCacheWithKey:(id)a0;
- (void)p_filterCurrentUsedTemplate:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
