@class NSData;

@interface VeLivePlayerAudioFrame : NSObject

@property (readonly, nonatomic) long long bufferType;
@property (readonly, nonatomic) int sampleRate;
@property (readonly, nonatomic) int channels;
@property (readonly, nonatomic) int bitDepth;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) int samples;

- (id)initWithAudioData:(float **)a0 sampleRate:(int)a1 channles:(int)a2 samples:(int)a3 bitDepth:(int)a4 pts:(long long)a5;
- (void)setBufferType:(long long)a0;
- (void).cxx_destruct;

@end
