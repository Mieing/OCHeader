@class NSString;

@interface AWENearbyHalfScreenLocalCacheManager : NSObject

@property (copy, nonatomic) NSString *locationCache;

+ (void)trackNearbyHalfScreenCacheMonitorWitModel:(id)a0 extraParam:(id)a1;
+ (id)getViewIDFromGroup:(id)a0;
+ (BOOL)isGroupContainViewID:(id)a0 targetGroupID:(id)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)getHalfScreenLocationCacheWithType:(unsigned long long)a0 pageType:(long long)a1 halfScreenModel:(id)a2 offsetY:(double)a3;
- (id)getFMP3GroupPropsConfigWithViewID:(id)a0;
- (void)cacheHalfScreenLocationWithParams:(id)a0 rowType:(unsigned long long)a1 pageType:(long long)a2 offsetY:(double)a3 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)getCacheToken;
- (id)getGroupLocationWithID:(id)a0 cacheKey:(id)a1 halfScreenID:(id)a2;
- (void)checkCacheVaild:(id)a0 resultBlk:(id /* block */)a1;
- (id)getWhiteListGroupID:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
