@interface AACDecoderAppleImpl : NSObject {
    struct OpaqueAudioConverter { } *_audioConverter;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _audioStreamBasicDescription;
}

- (id)init;
- (void)dealloc;
- (void)setupAudioConverter:(int)a0 SampleRate:(int)a1 outChannel:(int)a2 outSamplerate:(int)a3 Bit:(int)a4 profile:(int)a5;
- (id)decodeAudioFrame:(void *)a0 withLength:(int)a1 Pts:(long long)a2;

@end
