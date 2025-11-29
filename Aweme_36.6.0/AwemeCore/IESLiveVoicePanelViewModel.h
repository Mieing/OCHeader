@class HTSEventContext, CADisplayLink, NSString, IESLiveAudioPlayback, NSObject, IESLiveVoiceTranslater;
@protocol IESLiveRoomService, IESLiveAudioRecorderProvider, OS_dispatch_queue, IESLiveInternalRouter;

@interface IESLiveVoicePanelViewModel : NSObject

@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) CADisplayLink *recorderMeterTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordSerailQueue;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL preConnectEnable;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAudioPlayback *audioPlayback;
@property (retain, nonatomic) id<IESLiveAudioRecorderProvider> recorder;
@property (retain, nonatomic) IESLiveVoiceTranslater *voiceTranslater;
@property (copy, nonatomic) NSString *translateResult;
@property (copy, nonatomic) NSString *translateAvailablePartResult;
@property (nonatomic) long long translateResultLengthLimit;
@property (nonatomic) BOOL voiceTrans;
@property (nonatomic) BOOL voiceMsg;
@property (nonatomic) BOOL defaultVoiceMsg;
@property (nonatomic) BOOL voiceMerge;
@property (copy, nonatomic) id /* block */ failure;
@property (copy, nonatomic) id /* block */ successTrans;
@property (copy, nonatomic) id /* block */ sendVoiceMessage;
@property (copy, nonatomic) id /* block */ volumeChanged;

- (void)startRecord;
- (void)cancelRecord;
- (void)stopRecorderMeterTimer;
- (void)refreshRecorderMeter;
- (void)startRecorderMeterTimer;
- (void)trackMicButtonLongPressWithEntrance:(id)a0;
- (void)trackRecordDidCanceledWithEntrance:(id)a0;
- (void)sendRecordWithDuration:(double)a0 maxDuration:(double)a1;
- (BOOL)checkIfCanStartRecord;
- (void)showSetAlertView;
- (void)connectTranslate;
- (void)pauseTranslate;
- (void)restartRecord;
- (void)translatePreConnect;
- (void)startTranslate;
- (void)cancelTranslate;
- (void)trackTranslateDidCompleted;
- (void).cxx_destruct;
- (id)init;

@end
