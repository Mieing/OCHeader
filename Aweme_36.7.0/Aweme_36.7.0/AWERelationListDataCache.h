@class NSString, AWERelationFollowListCacheData;

@interface AWERelationListDataCache : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWERelationFollowListCacheData *cacheData;
@property (nonatomic) long long state;
@property (readonly, nonatomic) BOOL hasCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)updateCleanList:(id)a0;
- (void)updateGroupCount:(long long)a0;
- (void)updateFollowList:(id)a0;
- (void)trackCacheUsageWithList:(id)a0 error:(id)a1;
- (void)markCleanList;
- (void)markGroupCount;
- (void)syncCache;
- (void)trackClearCache:(long long)a0;
- (void)syncCacheForced;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)clearCache;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
