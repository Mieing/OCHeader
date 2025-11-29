@class NSError, NSData, NSMutableArray;
@protocol KSAudioQueueDelegate;

@interface KSAudioQueue : NSObject {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _format;
    unsigned int _maxPacktSize;
    NSMutableArray *_canUseQueueBuf;
    NSMutableArray *_allQueueBuf;
    float _volume;
    float _playRate;
}

@property (nonatomic) struct OpaqueAudioQueue { } *audioQueue;
@property (nonatomic) unsigned long long status;
@property (weak, nonatomic) id<KSAudioQueueDelegate> delegate;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned int bufferCount;
@property (retain, nonatomic) NSData *magicCookie;

- (id)initWithFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 maxPacketSize:(unsigned int)a1 bufferCount:(unsigned int)a2;
- (void)dealloc;
- (void)setError:(id)a0;
- (BOOL)playedTime:(double *)a0;
- (BOOL)prepareAudioQueue;
- (id)acquireQueueBuf:(unsigned long long *)a0;
- (unsigned int)acquireQueueBufCnt;
- (void)returnQueueBuf:(id)a0;
- (BOOL)enqueueBuf:(id)a0 desNum:(unsigned int)a1;
- (BOOL)startQueue;
- (void)stop;
- (void)pauseBeforeStopAudioQueue;
- (void)prepareStop;
- (void)playEnd;
- (BOOL)pause;
- (BOOL)resume;
- (BOOL)reset;
- (BOOL)tryStartQueue;
- (BOOL)setVolume:(float)a0;
- (float)getCurrentVolume;
- (BOOL)setPlayRate:(float)a0;
- (float)getCurrentPlayRate;
- (void)disposeAudioQueue;
- (void)clearData;
- (int)startAudioQueue;
- (void)handleAudioQueueOutputCallBack:(struct OpaqueAudioQueue { } *)a0 buffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a1;
- (void)handleAudioQueuePropertyCallBack:(struct OpaqueAudioQueue { } *)a0 property:(unsigned int)a1;
- (void).cxx_destruct;

@end
