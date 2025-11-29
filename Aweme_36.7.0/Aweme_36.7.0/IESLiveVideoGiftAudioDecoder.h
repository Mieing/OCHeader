@class IESLiveVideoGiftAudioDemuxer, IESLiveVideoGiftAudioResampler, NSObject, IESLiveVideoGiftQueue;
@protocol OS_dispatch_queue;

@interface IESLiveVideoGiftAudioDecoder : NSObject {
    IESLiveVideoGiftAudioDemuxer *_demuxer;
    struct OpaqueAudioConverter { } *_mAudioConverter;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _decodeFormat;
    BOOL _isPreprocessing;
    id /* block */ _decodeBlock;
    IESLiveVideoGiftAudioResampler *_resampler;
    IESLiveVideoGiftQueue *_emptyBuffer;
    IESLiveVideoGiftQueue *_fillBuffer;
    long long _bufferSize;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    id /* block */ _processError;
    long long _audioPlaybackType;
}

- (void)configDecodeAudioFormat;
- (int)decodeIOData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1;
- (id)initWithDemuxer:(id)a0 bufferSize:(long long)a1 decodeBlock:(id /* block */)a2 processError:(id /* block */)a3;
- (void)updateAudioPlaybackType:(long long)a0;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })decodeFormat;
- (void)preprocessIfNeeded;
- (int)renderIOData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1;
- (void).cxx_destruct;
- (void)stop;
- (void)seekToTime:(double)a0;
- (void)dealloc;
- (BOOL)setup:(id *)a0;

@end
