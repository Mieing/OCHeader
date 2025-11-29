@interface LCAudioMixer : NSObject {
    void *mCompressor;
    void *mCompressorOther;
    float _audioVolume;
    float _otherVolume;
}

- (void)setVolume:(float)a0 forTrack:(int)a1;
- (void)getVolume:(float *)a0 ofTrack:(int)a1;
- (void)addInputWithLayerId:(int)a0;
- (void)removeInputForLayer:(int)a0;
- (void)renderAudioTo:(short *)a0 withAudio:(short *)a1 withAudio:(short *)a2 samples:(int)a3;
- (id)init;
- (void)dealloc;

@end
