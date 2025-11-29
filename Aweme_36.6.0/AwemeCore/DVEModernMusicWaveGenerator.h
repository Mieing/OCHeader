@class NSOperationQueue;

@interface DVEModernMusicWaveGenerator : NSObject

@property (retain, nonatomic) NSOperationQueue *taskQueue;

+ (id)sharedInstance;

- (id)generateAudioWavePointsWithAudioPath:(id)a0 descriptionKey:(id)a1 pointsCount:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
