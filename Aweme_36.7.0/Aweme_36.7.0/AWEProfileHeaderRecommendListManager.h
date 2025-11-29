@interface AWEProfileHeaderRecommendListManager : NSObject

@property (nonatomic) BOOL limit;
@property (nonatomic) long long exposeCount;
@property (nonatomic) BOOL immediateLimit;
@property (nonatomic) long long limitCount;
@property (nonatomic) long long unInteractedCount;
@property (nonatomic) long long limitCountFor1kFansLower;
@property (nonatomic) long long continualUnInteractedCount;

+ (long long)convertShowMethodTrack:(long long)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)shouldShowRecommendListAutoWithUser:(id)a0 awemeModel:(id)a1 isFromPostWorkList:(BOOL)a2 trackParams:(id)a3 customParam:(id)a4;
- (void)increaseExposeCount;
- (id)uidKey:(id)a0;
- (BOOL)isFromLower1KFansOrFamiliarWithUser:(id)a0 awemeModel:(id)a1 trackParams:(id)a2;
- (BOOL)p_shouldShowRecommendWithUserFansLowerThan1k:(id)a0 awemeModel:(id)a1 isFromPostWorkList:(BOOL)a2 trackParams:(id)a3 customParam:(id)a4;
- (void)recordExposeCountInOneDay;
- (BOOL)hasReachedRecommendCardMaxAutoShowCount;
- (BOOL)p_shouldShowRecommendWithUserFansMoreThan10k:(id)a0 isFromPostWorkList:(BOOL)a1 trackParams:(id)a2 customParam:(id)a3;
- (BOOL)reachUnInteractedLimitFor1kFansLower;
- (id)recommendExposeCountPerDayKey;
- (BOOL)reachUnInteractedLimit;
- (void)removeExposeCountLimit;
- (void)increaseUnInteractedCount;
- (void)increaseContinualUnInteractedCount;
- (void)resetContinualUnInteractedCount;
- (void)limitImmediately;
- (void)removeImmediateLimit;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
