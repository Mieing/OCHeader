@class NSLock;

@interface LCAudioScore : NSObject {
    void *_singScoreHandle;
    char *_midiFileName;
}

@property (nonatomic) BOOL isStart;
@property (retain, nonatomic) NSLock *startLock;
@property (nonatomic) int sampleRate;
@property (nonatomic) long long logCnt;

- (id)getMidiDrawingData;
- (id)getRealtimeInfo;
- (id)initWithMidiFileName:(const char *)a0 lyricFileName:(const char *)a1;
- (void)startScore;
- (void)stopScore;
- (void)setTranspose:(int)a0;
- (void)process:(short *)a0 inNumberFrames:(int)a1 channels:(int)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)seek:(double)a0;

@end
