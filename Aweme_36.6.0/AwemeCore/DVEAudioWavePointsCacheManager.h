@class ACCLRUCache;

@interface DVEAudioWavePointsCacheManager : NSObject

@property (retain, nonatomic) ACCLRUCache *cache;

+ (id)sharedInstance;

- (void)setWavePointsCache:(id)a0 forAudioResourceID:(id)a1;
- (id)wavePointsCacheForAudioResourceID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
