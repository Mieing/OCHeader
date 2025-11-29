@class NSUserDefaults, NSMutableArray;
@protocol ACCUserServiceProtocol;

@interface ACCVideoEditStickerCacheManager : NSObject

@property (weak, nonatomic) id<ACCUserServiceProtocol> userService;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSMutableArray *recentlyUsedCacheList;
@property (nonatomic) BOOL recentlyUsedCacheChanged;
@property (nonatomic) BOOL needUpdateCustomTabDada;

+ (void)destroyInstance;
+ (id)shareInstance;

- (void)addRecentlyUsedStickerCacheWithEffectModel:(id)a0 thirdPartyStickerModel:(id)a1;
- (void)saveCacheToLocal;
- (id)recentlyUsedStickerList;
- (void)updateRecentlyUsedCacheWith:(id)a0;
- (void)loadLocalCache;
- (void).cxx_destruct;
- (id)init;
- (id)storeKey;

@end
