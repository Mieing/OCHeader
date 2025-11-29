@class NSMutableDictionary;

@interface AWENearbyCardLynxPrefetchManager : NSObject

@property (nonatomic) BOOL isPrefetchSuccess;
@property (nonatomic) BOOL hasAlreadyStartedPrefetch;
@property (retain, nonatomic) NSMutableDictionary *heightMap;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)addHeight:(double)a0 defaultHeight:(double)a1;
- (long long)lynxHeightWithDefault:(double)a0;
- (void)prefetchLynxCardGurdResourceIfNeed;
- (void)__prefetchLynxCardGurdResourceIfNeed:(id)a0;
- (void)__trackWithPrefetchResult:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
