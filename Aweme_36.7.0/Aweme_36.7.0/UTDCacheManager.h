@class UTDCache, NSString;

@interface UTDCacheManager : NSObject <UTMCLifeCycleProtocol>

@property (retain, nonatomic) UTDCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addLog:(id)a0;
- (void)switchBackGround;
- (void)switchForeGround;
- (id)generateCacheKey:(id)a0;
- (void)synchronize;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)size;
- (void)synchronizeData;

@end
