@class BDPThreadSafeDictionary;

@interface BDPClientAIDetectionCacheHelper : NSObject

@property (retain, nonatomic) BDPThreadSafeDictionary *detectionCacheDict;
@property (retain, nonatomic) BDPThreadSafeDictionary *maxCountDict;
@property (retain, nonatomic) BDPThreadSafeDictionary *pathMaxCountDict;

+ (id)sharedInstance;

- (void)updateMaxCount:(long long)a0 detectionType:(long long)a1;
- (BOOL)checkPathCacheValidWithCacheId:(id)a0 cacheDetectionType:(long long)a1;
- (void)addDetectionObject:(id)a0 cacheId:(id)a1 invalidTime:(double)a2 pathInvalidTime:(double)a3 detectionType:(long long)a4;
- (void)addDetectionObject:(id)a0;
- (id)checkHasCacheWithObject:(id)a0;
- (BOOL)checkCacheValidWithCacheId:(id)a0 cacheDetectionType:(long long)a1;
- (void)addDetectionObjectWithModel:(id)a0 cacheId:(id)a1 detectionType:(long long)a2;
- (void)updatePathMaxCount:(long long)a0 detectionType:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
