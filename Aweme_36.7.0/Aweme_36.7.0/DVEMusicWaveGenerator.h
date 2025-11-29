@class NSLock, NSMutableDictionary, NSOperationQueue;

@interface DVEMusicWaveGenerator : NSObject

@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSOperationQueue *queue;

+ (id)shared;

- (id)generateWave:(id)a0 requireCount:(long long)a1 path:(id)a2;
- (id)dve_racsigalValueForKey:(id)a0 DefaultValue:(id)a1;
- (void)generatePointsWithAudioUrl:(id)a0 duration:(double)a1 pointsCount:(unsigned long long)a2 block:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
