@class NSArray;

@interface AWEStickerPickerSectionManager : NSObject

@property (copy, nonatomic) NSArray *lookedStickers;
@property (copy, nonatomic) NSArray *likedStickers;
@property (copy, nonatomic) NSArray *usedStickers;
@property (copy, nonatomic) NSArray *lastFetchUsedStickers;
@property (copy, nonatomic) id /* block */ stickerFilterBlock;
@property (nonatomic) BOOL isTeenMode;

+ (id)sectionNameMap;
+ (BOOL)isSameSectionWithSticker:(id)a0 otherSticher:(id)a1;

- (BOOL)isSectionEnabledWithCategory:(id)a0;
- (void)p_fetchUsedEffectsWithCategory:(id)a0 completion:(id /* block */)a1;
- (void)generateUsedSectionToFavorite:(id)a0 stickers:(id)a1;
- (id)p_getStickerIdsFromCacheWithKey:(id)a0;
- (void)p_getEffectsWithCacheKey:(id)a0 completion:(id /* block */)a1;
- (void)generateUsedSectionToFavorite:(id)a0 stickers:(id)a1 completeHandler:(id /* block */)a2;
- (void)generateUsedSectionToFavorite:(id)a0;
- (void)fetchUsedEffectsWithCategory:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
