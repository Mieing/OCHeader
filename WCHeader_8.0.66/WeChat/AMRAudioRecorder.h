@class NSRecursiveLock;

@interface AMRAudioRecorder : BaseAudioRecorder {
    NSRecursiveLock *mPrepareSentLock;
    BOOL mIsPrepareSent;
}

- (void)setDataFormat;
- (void)prepareBuffers;
- (id)init;
- (BOOL)prepareRecord;
- (void)createAMRFile:(id)a0;
- (void)createFile:(id)a0;
- (BOOL)prepareSend;
- (BOOL)prepareRecordButNotNotify;
- (BOOL)prepareQueue;
- (void)stopButNotNotify;
- (void)cleanResource;
- (void)stop;
- (long long)getVoiceFormat;
- (void).cxx_destruct;

@end
