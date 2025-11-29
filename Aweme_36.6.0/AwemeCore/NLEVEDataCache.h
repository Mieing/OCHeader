@class NSCache, NSMutableSet, NSMutableDictionary;

@interface NLEVEDataCache : NSObject

@property (retain, nonatomic) NSMutableSet *audioFilterActionCache;
@property (nonatomic) long long lastSelectCanvas;
@property (retain, nonatomic) NSMutableDictionary *reverseAssetMap;
@property (retain, nonatomic) NSMutableDictionary *keyAssetMap;
@property (retain, nonatomic) NSMutableDictionary *stickerMap;
@property (retain, nonatomic) NSMutableDictionary *rangIDMap;
@property (retain, nonatomic) NSMutableDictionary *rangIDToSlotMap;
@property (retain, nonatomic) NSMutableDictionary *userInfoMap;
@property (retain, nonatomic) NSMutableDictionary *audioFilterCacheMap;
@property (retain, nonatomic) NSMutableDictionary *maskCacheMap;
@property (retain, nonatomic) NSMutableDictionary *globalMaskCacheMap;
@property (retain, nonatomic) NSMutableDictionary *filterCacheMap;
@property (retain, nonatomic) NSMutableDictionary *filterHSLCacheMap;
@property (retain, nonatomic) NSMutableDictionary *chromaCacheMap;
@property (retain, nonatomic) NSMutableDictionary *aiMattingCacheMap;
@property (retain, nonatomic) NSMutableDictionary *globalEffectCacheMap;
@property (retain, nonatomic) NSMutableDictionary *partialEffectCacheMap;
@property (retain, nonatomic) NSMutableDictionary *slotAssetMap;
@property (retain, nonatomic) NSCache *preprocessInfoMapCache;
@property (retain, nonatomic) NSMutableDictionary *movieInputFillTypeMap;
@property (retain, nonatomic) NSMutableDictionary *rotationInfoMap;

- (void)addAudioFilter:(id)a0 video:(BOOL)a1 forKey:(id)a2 filterKey:(id)a3;
- (void)addAudioFilter:(id)a0 video:(BOOL)a1 forKey:(id)a2;
- (void)removeAudioFilters:(id)a0 forKey:(id)a1;
- (void)removeAudioFilterForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
