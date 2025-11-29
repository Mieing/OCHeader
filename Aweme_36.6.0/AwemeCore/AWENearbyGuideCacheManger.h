@class NSMutableDictionary;

@interface AWENearbyGuideCacheManger : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheTabNotShowGuide;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)handleRedDot:(id)a0 result:(BOOL)a1 reason:(id)a2;
- (void)handleShowResultGuideModel:(id)a0 result:(BOOL)a1 reason:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)applicationWillTerminate;
- (void)addObserver;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
