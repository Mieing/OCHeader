@class NSDictionary, NSTimer;

@interface IESLLPOIGDCJInfoCacheManager : NSObject

@property (copy, nonatomic) NSDictionary *cachedCJInfoDic;
@property (nonatomic) double cacheTimestamp;
@property (nonatomic) long long validTime;
@property (retain, nonatomic) NSTimer *checkTimer;

+ (id)sharedManager;

- (id)getCJSharkInfo;
- (id)getCJInfo;
- (void)cacheCJInfo;
- (void)startCacheCheckTimer;
- (void)stopCacheCheckTimer;
- (void)checkCacheValidityAndUpdateIfNeeded:(id)a0;
- (id)filterGoodsDetailCJParams;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
