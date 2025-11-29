@class NSString;

@interface BDPClientAIDetectionCacheObject : NSObject <BDPClientAIDetectionCacheProtocol>

@property (retain, nonatomic) id detectionObject;
@property (copy, nonatomic) NSString *detectionId;
@property (nonatomic) double detectionInvalidTime;
@property (nonatomic) double pathInvalidTime;
@property (nonatomic) long long detectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCacheObject:(id)a0 cacheId:(id)a1 cacheInvalidTime:(double)a2 pathInvalidTime:(double)a3 cacheDetectionType:(long long)a4;
- (double)cacheInvalidTime;
- (long long)cacheDetectionType;
- (void).cxx_destruct;
- (id)cacheId;
- (id)cacheObject;

@end
