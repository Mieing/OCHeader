@class NSMutableDictionary;

@interface IESGCPSKStoreProductTimeRecorder : NSObject

@property (retain, nonatomic) NSMutableDictionary *recorderCache;

- (void)recordAppID:(id)a0 timing:(unsigned long long)a1;
- (void)recordAppID:(id)a0 cacheHit:(BOOL)a1;
- (void)reportIfNeedWithAppID:(id)a0 extra:(id)a1;
- (void)recordAppID:(id)a0 timing:(unsigned long long)a1 time:(double)a2;
- (id)recorderModelWithAppID:(id)a0;
- (void).cxx_destruct;

@end
