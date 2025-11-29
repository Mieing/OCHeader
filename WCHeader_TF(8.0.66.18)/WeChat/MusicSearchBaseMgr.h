@class NSString, UploadShakeMusicMgr, SimpleAudioRecorder;

@interface MusicSearchBaseMgr : MMUserService <SimpleRecordBufferDelegate, UploadShakeMusicMgrDelegate, MMServiceProtocol> {
    unsigned long long m_offsetBytes;
    BOOL m_bStopRecord;
    unsigned int m_curSessionId;
    SimpleAudioRecorder *m_recorder;
    UploadShakeMusicMgr *m_uploadMgr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (int)StartSearch;
- (void)StartSearchInternal;
- (void)StartUploadMgr;
- (BOOL)StopSearch:(unsigned int)a0;
- (BOOL)checkSearchEnvironmentIsValid;
- (long long)recordTimeLimitInSecond;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (void)outputPcmBuffer:(void *)a0 bufferSize:(unsigned int)a1;
- (void)outputPeakPower:(float)a0;
- (void)onAudioBufferRecordEnd;
- (void)OnGetMusicItem:(id)a0 FPId:(unsigned int)a1;
- (void)onGetMusicItemSuccess:(id)a0 fpId:(unsigned int)a1;
- (void)OnGetMusicFail:(int)a0 SessionId:(unsigned int)a1;
- (void)onGetMusicItemFail:(int)a0 sessionId:(unsigned int)a1;
- (void).cxx_destruct;

@end
