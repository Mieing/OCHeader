@class NSString, NSMutableDictionary;

@interface WCFinderGetDetailCacheMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)hasCachedDataWithTid:(id)a0;
- (BOOL)cachedDataIsExpireWithTid:(id)a0;
- (double)getCachedTimeWithTid:(id)a0;
- (BOOL)getCachedResultWithTid:(id)a0;
- (id)getCachedInvalideMsgWithTid:(id)a0;
- (id)getCachedDataWithTid:(id)a0;
- (void)markTidGetDetailOnceWithTid:(id)a0 result:(BOOL)a1;
- (void)markTidGetDetailOnceWithTid:(id)a0 result:(BOOL)a1 invalideMsg:(id)a2;
- (void).cxx_destruct;

@end
