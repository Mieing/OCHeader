@class NSString, IESGCPPreloadResult;

@interface IESGCPPreloadTaskCache : NSObject

@property (readonly, copy, nonatomic) NSString *cachedId;
@property (readonly, nonatomic) double timeout;
@property (retain, nonatomic) IESGCPPreloadResult *cacheValue;

- (id)initWithCacheId:(id)a0 timeout:(double)a1;
- (void).cxx_destruct;

@end
