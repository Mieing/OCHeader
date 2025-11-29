@class NSString, FavAudioRecorder, MMTimer;

@interface WebviewRecorderManager : MMUserService <MMServiceProtocol, FavAudioRecorderDelegate, IRecordPermissionCheckExt> {
    FavAudioRecorder *_recorder;
    int _recordStatus;
    unsigned long long _startRecordTime;
    unsigned long long _endRecordTime;
    MMTimer *_recordTimer;
    long long _stopReason;
    long long _recordTimeoutValue;
}

@property (retain, nonatomic) NSString *lastFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (int)getRecordStatus;
- (BOOL)startRecord:(long long)a0 duration:(unsigned long long)a1;
- (BOOL)stopRecord;
- (BOOL)endRecord;
- (void)notifyStartRecordOnMainThread:(id)a0;
- (void)notifyRecordTimeTooShortOnMainThread;
- (void)notifyFinishRecordOnMainThread:(id)a0;
- (void)onTimeCount;
- (void)stopTime;
- (BOOL)internalStopRecord;
- (void)OnFavBeginRecording:(int)a0;
- (void)OnFavFinishRecord:(id)a0 VoiceFmt:(unsigned int)a1;
- (void).cxx_destruct;

@end
