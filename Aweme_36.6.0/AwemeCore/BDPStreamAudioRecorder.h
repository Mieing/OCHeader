@class NSObject, NSString, BDPAudioInterruptionConfig, BDPUniqueID, BDPAudioSessionLock;
@protocol OS_dispatch_queue;

@interface BDPStreamAudioRecorder : NSObject <AVAudioRecorderDelegate, BDPContainerLifeCycleMessage, BDPPermissionChangeMessage, BDPAudioInterruptionDelegate> {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _mDataFormat;
    struct OpaqueAudioQueue { } *_mQueue;
    struct AudioQueueBuffer *_mBuffers[3];
    struct OpaqueAudioFileID { } *_mAudioFile;
    unsigned int _bufferByteSize;
    long long _mCurrentPacket;
    BOOL _mIsRunning;
    unsigned int _encodeBitRate;
    BOOL _isQueueStoping;
    BOOL _isQueueDisposed;
    BOOL _isQueuePaused;
    id /* block */ _durationBlock;
    NSString *_recorderURLPath;
    unsigned long long _recorderFormat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAudioSessionLock *audioSessionLock;
@property (retain, nonatomic) BDPAudioInterruptionConfig *audioInterruptionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)startWithModel:(id)a0;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)pauseByInterrupt;
- (id)getInterruptUniqueID;
- (void)permissionStatusChanged:(id)a0 on:(BOOL)a1 uniqueID:(id)a2;
- (void)stopUsingRecorder;
- (BOOL)disposeAudioRecorder;
- (void)subscribeCommonError:(unsigned long long)a0;
- (void)stateChange:(id)a0 data:(id)a1;
- (void)subscribeInternalErrorWithMsg:(id)a0;
- (unsigned long long)setupAudioAndFilePropertyWithModel:(id)a0;
- (unsigned long long)setupAuidoQueue;
- (unsigned long long)setupAuidoFileWithPath:(id)a0 audioFileIDRef:(struct OpaqueAudioFileID **)a1;
- (unsigned long long)setupAudioQueueBufferAndMagicCookieWithModel:(id)a0;
- (BOOL)isCompressForamt;
- (void)doWorkAfterQueueActuallyStopped;
- (void)subscribeFrameRecorded:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a0 inNumberPacketDescriptions:(unsigned int)a1 inPacketDescs:(const struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a2;
- (void).cxx_destruct;
- (unsigned long long)pause;
- (unsigned long long)stop;
- (unsigned long long)resume;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;
- (void)setupAudioSession;

@end
