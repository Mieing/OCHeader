@class NSString, TingPlatformStreamPlayerStateMachine, NSCondition, NSData, NSMutableArray, AVAudioFormat;
@protocol TingStreamPlayerListener;

@interface TingPlatformStreamPlayer : NSObject <TingStreamPlayer> {
    struct TingPlatformStreamPlayerContext { struct OpaqueAudioQueue *audioQueueRef; struct AudioQueueBuffer *audioQueueBuffers[3]; struct OpaqueAudioQueue *audioQueueRefTemp; struct AudioQueueBuffer *audioQueueBuffersTemp[3]; unsigned int bufferByteSize; unsigned int bufferFrames; } mContext;
}

@property (retain, nonatomic) NSMutableArray *mDataArray;
@property (retain, nonatomic) NSCondition *mArrayCondition;
@property (retain, nonatomic) AVAudioFormat *mAudioFormat;
@property (nonatomic) int mSampleRate;
@property (nonatomic) int mSampleFormat;
@property (nonatomic) int mChannels;
@property (nonatomic) BOOL mForceStop;
@property (nonatomic) int mAQBufferStopCount;
@property (nonatomic) int mBufferHasMore;
@property (retain, nonatomic) NSData *mAudioData;
@property (nonatomic) int mAudioDataOff;
@property (nonatomic) int mBufferWaterLevel;
@property (nonatomic) int mBufferCount;
@property (retain, nonatomic) id<TingStreamPlayerListener> mListener;
@property (retain, nonatomic) TingPlatformStreamPlayerStateMachine *mStateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)releaseAudioQueueInner;
- (void)releaseAudioQueue;
- (void)setMetaInfo:(int)a0 sampleRate:(int)a1 sampleFormat:(int)a2 channelCount:(int)a3;
- (BOOL)initAudioQueueWithsampleRate:(int)a0 sampleFormat:(int)a1 channelCount:(int)a2;
- (void)enqueueBuffer:(id)a0 hasMore:(BOOL)a1;
- (id)dequeueBuffer;
- (void)clearQueue;
- (void)startInner;
- (void)start;
- (void)pauseInner;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)resetInner;
- (void)reset;
- (void)setVolume:(float)a0;
- (void)setStreamPlayerListener:(id)a0;
- (BOOL)tryDoOp:(unsigned long long)a0;
- (void).cxx_destruct;

@end
