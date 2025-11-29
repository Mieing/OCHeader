@class NSString, FavAudioRecorder, MMTimer;

@interface WNAudioMgr : MMUserService <MMServiceProtocol, IRecordPermissionCheckExt, FavAudioRecorderDelegate, IFavAudioPlayerExt> {
    int _recordStatus;
    FavAudioRecorder *_recorder;
    unsigned int _voiceFmt;
    NSString *_lastFilePath;
    BOOL _isCancelRecord;
    unsigned int _startRecordTime;
    unsigned int _endRecordTime;
    MMTimer *_recordTimer;
    float _curPeakPower;
    id recordingVoiceObj;
    NSString *_curPlayingObjectId;
}

@property (readonly, nonatomic) BOOL recording;
@property (readonly, nonatomic) BOOL playing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startRecordWithObj:(id)a0;
- (void)stopRecord;
- (void)cancelRecord;
- (id)curRecordId;
- (void)startPlayWithObjectId:(id)a0 LocalPath:(id)a1 Fmt:(unsigned int)a2 Len:(int)a3 FromOffsetms:(unsigned int)a4;
- (id)curPlayId;
- (void)stopPlay;
- (void)setProgress:(unsigned int)a0;
- (unsigned int)getVoiceFmt:(id)a0;
- (id)getVoiceFmtOfString:(unsigned int)a0;
- (void)startTimeCount;
- (void)stopTimeCount;
- (void)onTimeCount;
- (void)startRecord;
- (void)realStartRecord;
- (void)FinishRecord:(id)a0;
- (unsigned int)GetTmpAudioTime:(id)a0;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnFavLevelMeter:(float)a0;
- (void)OnFavBeginRecording:(int)a0;
- (void)finishWithError;
- (void)OnFavEndRecording:(id)a0 VoiceFmt:(unsigned int)a1;
- (void)OnFavFinishRecord:(id)a0 VoiceFmt:(unsigned int)a1;
- (void)OnBeginPlay:(id)a0;
- (void)OnEndPlay:(id)a0;
- (void)OnPlayError:(id)a0;
- (void)OnAudioPlaying:(id)a0 Offset:(unsigned int)a1;
- (void)OnEarTip;
- (void).cxx_destruct;

@end
