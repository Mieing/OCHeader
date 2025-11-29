@class AVAudioFormat, AVAudioPCMBuffer, AVAudioConverter;

@interface AtxResamplerImpl : NSObject

@property (nonatomic) int srcChannelCount;
@property (nonatomic) int dstChannelCount;
@property (nonatomic) int srcSamples10Ms;
@property (nonatomic) int srcBitsPerSample;
@property (nonatomic) int dstBitsPerSample;
@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) AVAudioFormat *srcFormat;
@property (retain, nonatomic) AVAudioFormat *dstFormat;
@property (retain, nonatomic) AVAudioPCMBuffer *srcBuffer;
@property (retain, nonatomic) AVAudioPCMBuffer *dstBuffer;
@property (retain, nonatomic) AVAudioConverter *converter;

- (void *)queryFrameData:(id)a0 format:(unsigned long long)a1 channelIndex:(int)a2;
- (id)initWithInSampleRate:(long long)a0 primeMethod:(long long)a1 inSampleRate:(int)a2 inChannelCount:(int)a3 inSampleFormat:(int)a4 inInterleaved:(BOOL)a5 outSampleRate:(int)a6 outChannelCount:(int)a7 outSampleFormat:(int)a8 outinterleaved:(BOOL)a9;
- (int)resample:(void **)a0 sourceFrames:(unsigned int)a1 destination:(void **)a2 dstFrames:(unsigned int)a3;
- (void).cxx_destruct;

@end
