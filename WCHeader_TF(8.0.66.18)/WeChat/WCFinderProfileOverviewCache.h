@class NSArray, NSString, WCFinderProfileOverviewCacheItem;

@interface WCFinderProfileOverviewCache : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) WCFinderProfileOverviewCacheItem *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_items;
+ (void)PBArrayAdd_cache;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
