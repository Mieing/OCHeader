@class NSTimer, NSMutableArray, NSString;

@interface TVLDNSCacheManager : NSObject <TVLDNSCaching>

@property (retain, nonatomic) NSMutableArray *caches;
@property (retain, nonatomic) NSTimer *autoFlushTimer;
@property (nonatomic) BOOL shouldUseCacheRecordExpiredDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)DNSCacheWithHostname:(id)a0;
- (BOOL)tryCachingIPAddresses:(id)a0 withHost:(id)a1 timeToLive:(double)a2;
- (id)cachedIPAddressesForHost:(id)a0;
- (id)copy;
- (void)flush;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopy;

@end
