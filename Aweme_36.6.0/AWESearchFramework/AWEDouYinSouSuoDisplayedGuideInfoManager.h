@class AWEStorage, AWEDouYinSouSuoDisplayedGuideInfo;

@interface AWEDouYinSouSuoDisplayedGuideInfoManager : NSObject

@property (readonly, nonatomic) AWEStorage *cache;
@property (retain, nonatomic) AWEDouYinSouSuoDisplayedGuideInfo *displayedGuideInfo;
@property (readonly, nonatomic) long long displayedCount;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)loadCacheIfNeed;
- (void)clearCacheIfNeed;
- (BOOL)hasDisplayedGuideForAweme:(id)a0;
- (void)markGuideHasDisplayedForAweme:(id)a0;
- (void)refreshCacheIfNeed;
- (void).cxx_destruct;
- (id)init;
- (void)updateCache;
- (BOOL)shouldClearCache;

@end
