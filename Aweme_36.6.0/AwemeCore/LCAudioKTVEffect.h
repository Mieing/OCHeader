@class NSLock;

@interface LCAudioKTVEffect : NSObject {
    void *processor;
    void *bus_array;
    float *fin;
}

@property (nonatomic) BOOL isStart;
@property (retain, nonatomic) NSLock *startLock;
@property (nonatomic) BOOL isSwitchSourcePath;
@property (nonatomic) int sampleRate;
@property (nonatomic) long long logCnt;

- (int)switchKtvEffectWithSourcePath:(id)a0;
- (void)startEffect;
- (void)stopEffect;
- (void)processWithData:(short *)a0 numberOfChannel:(int)a1 numberOfSamples:(int)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
