@class NSArray, NSMutableDictionary, NSDictionary, NSString;

@interface AWELiveDuplicateLiveFilterManager : NSObject <AWELiveDuplicateFilterManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *liveDuplicateInfos;
@property (retain, nonatomic) NSArray *enterAllowList;
@property (retain, nonatomic) NSDictionary *timeSpaceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)shouldFilterDuplicateItemWithExistItemModel:(id)a0 index:(unsigned long long)a1 enterFrom:(id)a2;
- (void)addAweme:(id)a0 index:(unsigned long long)a1 enterFrom:(id)a2;
- (void)containerDeleteAwemesWithLiveFilter:(id)a0 enterFrom:(id)a1;
- (id)cacheKeyWithDataController:(id)a0 enterFrom:(id)a1;
- (void)clearDuplicateItemsWithKey:(id)a0;
- (id)cacheKeyWithAwemeModel:(id)a0 enterFrom:(id)a1;
- (long long)timeSpaceForKey:(id)a0;
- (void)trackFilterItemWithEvent:(id)a0 awemeModel:(id)a1 enterFrom:(id)a2 extraParams:(id)a3;
- (long long)homepageHotTimeSpace;
- (long long)homepageFollowTimeSpace;
- (long long)homepageFamiliarTimeSpace;
- (BOOL)enableDuplicateFilterWithDataController:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setup;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
