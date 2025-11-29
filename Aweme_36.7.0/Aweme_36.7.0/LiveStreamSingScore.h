@interface LiveStreamSingScore : NSObject {
    struct scoped_refptr<avframework::AudioDeviceInterface::AudioSingScoringInterface> { struct AudioSingScoringInterface *ptr_; } _singScoring;
}

+ (id)getMidiDrawingDataFilePath:(id)a0;

- (long long)setupSingScoring:(long long)a0 level:(long long)a1 lyricsFilepath:(id)a2 midiFilepath:(id)a3 refAcapellaFilepath:(id)a4;
- (long long)releaseSingScoring;
- (id)getMidiDrawingData;
- (id)getRealtimeInfo;
- (id)initWithSingScoring:(struct scoped_refptr<avframework::AudioDeviceInterface::AudioSingScoringInterface> { struct AudioSingScoringInterface *x0; })a0;
- (double)getPitch;
- (id)getSingScoringReport;
- (void).cxx_destruct;
- (long long)setPitch:(double)a0;
- (long long)stop;
- (id).cxx_construct;
- (long long)start;
- (long long)seek:(double)a0;

@end
