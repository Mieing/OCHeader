@class NSString, NSMutableDictionary;

@interface AWERVCacheManager : NSObject <AWERVCacheManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *relatedVideoCache;
@property (retain, nonatomic) NSMutableDictionary *awemeModelCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setCache:(id)a0 itemID:(id)a1;
- (void)setAwemeCache:(id)a0 itemID:(id)a1;
- (id)cacheWithItemID:(id)a0;
- (id)awemeCacheWithItemID:(id)a0;
- (void)removeCacheWithItemID:(id)a0;
- (void)trackCache:(id)a0 itemID:(id)a1 enterMethod:(id)a2;
- (void).cxx_destruct;

@end
