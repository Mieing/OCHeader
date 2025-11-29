@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface BDPAppPreloadFrequencyController : NSObject <BDPWarmBootMessage>

@property (retain, nonatomic) NSMutableDictionary *controlDic;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedContrller;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (BOOL)canPreloadWithPreloadInfo:(id)a0;
- (long long)getShortTimeLimitWithPreloadInfo:(id)a0;
- (long long)getLongTimeLimitWithPreloadInfo:(id)a0;
- (BOOL)haveOpenedWithAppid:(id)a0;
- (BOOL)havePkgCacheWithAppid:(id)a0 pagePath:(id)a1;
- (BOOL)enablePreloadForWeakNetABTest:(id)a0 preloadTime:(id)a1;
- (BOOL)haveValidPkgCacheWithAppid:(id)a0 schema:(id)a1;
- (void)startPreloadFrequencyControlWithAppids:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
