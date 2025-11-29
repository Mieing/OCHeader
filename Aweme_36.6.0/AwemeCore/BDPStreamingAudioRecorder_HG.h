@class NSString, BDPUniqueID;

@interface BDPStreamingAudioRecorder_HG : NSObject <AVAudioRecorderDelegate, BDPContainerLifeCycleMessage, BDPPermissionChangeMessage> {
    id /* block */ _durationBlock;
    NSString *_recorderURLPath;
    NSString *_fileExtension;
    struct BDPRecorderState_HG { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } mDataFormat; struct OpaqueAudioQueue *mQueue; struct AudioQueueBuffer *mBuffers[3]; struct OpaqueAudioFileID *mAudioFile; unsigned int bufferByteSize; long long mCurrentPacket; BOOL mIsRunning; id /* block */ onFrameRecordedWithAudioDataBlock; id /* block */ onStopRecorderBlock; id /* block */ onErrorRecorderBlock; id /* block */ disposeRecorderBlock; } _recorderState;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)permissionStatusChanged:(id)a0 on:(BOOL)a1 uniqueID:(id)a2;
- (void)operateState:(id)a0 callback:(id /* block */)a1;
- (void)onApplicationEnterBackground:(id)a0;
- (void)stateChange:(id)a0 data:(id)a1;
- (void)forceStopRecorder;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupAudioSession;

@end
