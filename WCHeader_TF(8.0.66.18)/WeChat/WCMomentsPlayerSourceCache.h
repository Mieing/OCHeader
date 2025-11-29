@class NSString, NSMutableDictionary;

@interface WCMomentsPlayerSourceCache : MMUserService <MMCleanCacheMgrExt, MMServiceProtocol>

@property (readonly, nonatomic) NSMutableDictionary *sourceStatusCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateSourceStatus:(long long)a0 forMediaItem:(id)a1;
- (long long)getSourceStatusForMediaItem:(id)a0;
- (void)onCacheMgrCleanCacheWarning;
- (void).cxx_destruct;

@end
