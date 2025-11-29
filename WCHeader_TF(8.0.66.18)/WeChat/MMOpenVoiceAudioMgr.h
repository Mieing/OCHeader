@class NSString, NSRecursiveLock;
@protocol MMOpenVoiceAudioMgrDelegate;

@interface MMOpenVoiceAudioMgr : NSObject <AUAudioDataSource, IAUAudioDeviceExt> {
    id /* block */ currentCallback;
    BOOL isMutePlay;
    BOOL isMuteRecord;
    BOOL isHandsFree;
    NSRecursiveLock *mAudioPlayLock;
    int _voiceSampleRate;
    int _voiceChannels;
    int _voiceFrameDuation;
    int _voicePlaySampleRate;
    int _voicePlayChannels;
    int _voicePlayFrameDuation;
    int recordCount;
    int _failCount;
    BOOL _isCallbackedStartStatus;
    char *pRecBuff;
    unsigned int silentDataLen;
}

@property (weak, nonatomic) id<MMOpenVoiceAudioMgrDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)releaseAll;
- (BOOL)startVoIP:(BOOL)a0 useRecorder:(BOOL)a1 callback:(id /* block */)a2;
- (void)startDeviceWithUseMicroPhone:(BOOL)a0 permissionFailCallback:(id /* block */)a1;
- (void)restartAudioWithIsHandsFree:(BOOL)a0;
- (BOOL)setMutePlay:(BOOL)a0;
- (BOOL)setMuteRecord:(BOOL)a0;
- (BOOL)isRunning;
- (void)setHandsFree:(BOOL)a0;
- (void)innerSetHandsFree:(BOOL)a0;
- (int)AudioDevGetData:(char *)a0 length:(unsigned int)a1;
- (void)mockSilentAudioDataWhenMuteMicroPhone;
- (void)callback:(int)a0;
- (void)audioDeviceForceStop:(id)a0;
- (void)audioDeviceStartedFail:(id)a0;
- (void)audioDeviceStartedSuccess:(id)a0;
- (void)setAudioParam:(id)a0;
- (int)AudioDevPutData:(char *)a0 length:(unsigned int)a1;
- (BOOL)isOpenVoiceModelRunning;
- (int)getRecordCount;
- (int)getPlayCount;
- (int)getVoiceVolume;
- (void).cxx_destruct;

@end
