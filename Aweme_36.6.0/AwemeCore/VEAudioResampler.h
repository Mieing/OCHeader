@class AVAssetWriterInput, AVAssetWriter, IESMMAudioFile;

@interface VEAudioResampler : NSObject

@property (retain, nonatomic) IESMMAudioFile *audioReader;
@property (retain, nonatomic) AVAssetWriter *assetWriter;
@property (retain, nonatomic) AVAssetWriterInput *audioInput;
@property (nonatomic) int outChannels;
@property (nonatomic) int outSampleRate;
@property (nonatomic) int outBitrate;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } audioDescription;

- (void)resampleAudioWithURL:(id)a0 outChannels:(int)a1 resampleRate:(int)a2 bitRate:(int)a3 completion:(id /* block */)a4;
- (id)errorWithMsg:(id)a0;
- (void)resampleAudioWithURL:(id)a0 resampleRate:(int)a1 bitRate:(int)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { } *)resample:(struct opaqueCMSampleBuffer { } *)a0;

@end
