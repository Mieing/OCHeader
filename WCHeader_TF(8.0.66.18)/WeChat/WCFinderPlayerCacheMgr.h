@class NSString, NSMutableDictionary;

@interface WCFinderPlayerCacheMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *playerCaches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheKeyForTid:(id)a0 scene:(int)a1;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cachePlayer:(id)a0 forKey:(id)a1;
- (void)removePlayerForKey:(id)a0;
- (id)playerForKey:(id)a0;
- (BOOL)isPlayerInCache:(id)a0;
- (void).cxx_destruct;

@end
