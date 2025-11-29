@class NSURL, VEVideoReader, NSMutableArray;

@interface IESMMBGGifPlayer : IESMMBGVideoPlayer

@property (nonatomic) float rate;
@property (nonatomic) int MAX_READER;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) NSURL *gifUrl;
@property (nonatomic) BOOL isStartRecord;
@property (retain, nonatomic) VEVideoReader *gifReader;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sameGifPlayTotalTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sameGifPlayStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sameGifRecordStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sameGifRecordTotalTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } tempGifRecordTotalTime;
@property (retain, nonatomic) NSMutableArray *gifReaderArray;

- (struct __CVBuffer { } *)copyPixelBuffer;
- (id)currentUrl;
- (void)setVideoURL:(id)a0 rate:(float)a1 completeBlock:(id /* block */)a2 didPlayToEndBlock:(id /* block */)a3;
- (void)seekToPercent:(float)a0 completeBlock:(id /* block */)a1;
- (void)setVideoURL:(id)a0 rate:(float)a1 completeBlock:(id /* block */)a2;
- (void)resetRecordStatus:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })assetDuration;
- (float)currentPlayPercent;
- (void)forbidAudioTracks:(BOOL)a0;
- (BOOL)isForbidAudioTracks;
- (void)mutePlayer:(BOOL)a0;
- (void)changeRate:(float)a0 completeBlock:(id /* block */)a1;
- (id)getPlayer;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completeBlock:(id /* block */)a1;
- (struct __CVBuffer { } *)copyPixelBufferInterval:(double)a0;
- (struct __CVBuffer { } *)copyPixelBuffer:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)dealloc;

@end
