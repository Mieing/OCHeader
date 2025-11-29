@class NSString, NSMutableDictionary;

@interface WCFinderContactCacheMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *contactCaches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (void)onServiceInit;
- (id)contactProfileExtInfoCacheForKey:(id)a0;
- (id)selfContactCache;
- (id)getClubContactCache:(id)a0;
- (void).cxx_destruct;

@end
