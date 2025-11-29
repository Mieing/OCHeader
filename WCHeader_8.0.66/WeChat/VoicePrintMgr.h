@class NSString, UploadVoicePrintMgr, SPXAudioRecorder;

@interface VoicePrintMgr : MMObject <AudioRecorderDelegate, UploadVoicePrintMgrDelegate> {
    unsigned int _curVoiceID;
    SPXAudioRecorder *_recoder;
    UploadVoicePrintMgr *_uploadMgr;
    BOOL bIsEnviromentCheckMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (unsigned int)StartMatchingWithType:(unsigned int)a0 withScene:(unsigned int)a1 andResID:(unsigned int)a2;
- (BOOL)StartEnviromentCheck;
- (void)StopEnviromentCheck;
- (void)UpdateResourceID:(unsigned int)a0;
- (unsigned int)StartVoicePrintCreate:(unsigned int)a0 withResId:(unsigned int)a1;
- (unsigned int)StartVoicePrintCreateByRsa:(unsigned int)a0 withVoiceKey:(id)a1 andTicket:(id)a2;
- (unsigned int)StartVoicePrintVerify:(unsigned int)a0 withResId:(unsigned int)a1;
- (unsigned int)StartVoicePrintVerifyByRsa:(unsigned int)a0 withResId:(unsigned int)a1 andTicket:(id)a2;
- (BOOL)StopRecord:(unsigned int)a0;
- (BOOL)StopUpload:(unsigned int)a0;
- (BOOL)StopRecordAndUpload:(unsigned int)a0;
- (BOOL)OnRecorderPrepareSend:(id)a0;
- (void)OnRecorderLevelMeter:(id)a0 Peak:(float)a1;
- (void)OnRecorderBeginRecording:(id)a0 ErrNo:(int)a1;
- (void)OnRecorderPart:(id)a0 Offset:(unsigned int)a1 Len:(unsigned int)a2 EndFlag:(unsigned int)a3 ForceDelete:(BOOL)a4 Duration:(unsigned int)a5;
- (void)OnMgrLocalFileOperationError;
- (void)OnMgrNetworkError:(int)a0 andMessage:(id)a1;
- (void)OnMgrGetMatchingResult:(int)a0 VoiceId:(unsigned int)a1;
- (void)OnMgrVerifyOkWithRandomKey:(id)a0 VoiceId:(unsigned int)a1;
- (void)OnMgrRegOkWithBioSigKey:(id)a0 VoiceId:(unsigned int)a1;
- (void).cxx_destruct;

@end
