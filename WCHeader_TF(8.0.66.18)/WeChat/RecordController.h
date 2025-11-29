@class NSString, MMTimer;
@protocol RecordControllerDelegate;

@interface RecordController : MMObject <MonoServiceLogicExt, IAudioSenderExt, IRemoteControlCheckExt, IMsgExt> {
    MMTimer *m_TimeoutTimer;
    BOOL m_bRecording;
    BOOL m_bRecordEnabled;
    BOOL m_bRemoteControl;
    unsigned int m_currentTmpFormat;
    double m_iLastMsgSentTime;
}

@property (weak, nonatomic) id<RecordControllerDelegate> m_delegate;
@property (nonatomic) unsigned int m_uiTmpRecordID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)Register;
- (void)UnRegister;
- (id)init;
- (BOOL)isRecording;
- (void)setButtonHighlighted:(BOOL)a0;
- (void)ResetStateWithNotifyResetTips:(id)a0;
- (void)TooShortTips;
- (void)TooLongTips;
- (void)RecordingTimeOutCounting;
- (void)StartRecordingInternal:(id)a0;
- (void)StartTmpRecordInternal;
- (void)StartTmpRecording:(unsigned int)a0;
- (void)StartTmpRecording;
- (BOOL)StartRecordingFromUsr:(id)a0 ToUsr:(id)a1 UserInfo:(id)a2;
- (void)StopRecordingInternal;
- (void)StopRecordingInternal:(id)a0;
- (void)StopRecording;
- (BOOL)StopRecordingInTransState:(BOOL)a0;
- (void)CancelRecording;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)a0;
- (void)stopRecording_notification:(id)a0;
- (void)interruptRecording;
- (BOOL)canRemoteRecord;
- (void)iRemoteControlCheckShouldBeginRecord;
- (void)iRemoteControlCheckShouldFinishRecord;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)OnBeginRecording:(unsigned int)a0 ErrNo:(int)a1;
- (void)OnEndRecording:(unsigned int)a0;
- (void)OnRecordStartFail:(id)a0;
- (void)OnLevelMeter:(unsigned int)a0 Peak:(float)a1;
- (void)OnAddMsg:(id)a0;
- (void)OnMsgSent:(id)a0;
- (void)OnSendError:(id)a0 ErrNo:(int)a1;
- (void)onVoiceMsgSent:(id)a0;
- (void)Reset;
- (void)dealloc;
- (void).cxx_destruct;

@end
