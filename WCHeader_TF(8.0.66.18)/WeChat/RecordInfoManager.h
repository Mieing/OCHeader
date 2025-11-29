@class NSString, AudioRecorderUserData, MMTimer, NSMutableArray, MMNewVoiceInputReportObj;
@protocol RecordInfoManagerDelegate;

@interface RecordInfoManager : NSObject <IAudioSenderExt>

@property (nonatomic) unsigned long long recordState;
@property (nonatomic) unsigned long long transState;
@property (nonatomic) unsigned int inputLanguageType;
@property (nonatomic) unsigned int translatingWordingIndex;
@property (retain, nonatomic) NSString *translatingWording;
@property (retain, nonatomic) MMNewVoiceInputReportObj *reportObj;
@property (retain, nonatomic) NSString *translatedText;
@property (retain, nonatomic) AudioRecorderUserData *recordInfo;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned int localId;
@property (retain, nonatomic) NSMutableArray *arrVoiceIds;
@property (retain, nonatomic) MMTimer *translatingTimer;
@property (nonatomic) BOOL bTransStartSucc;
@property (nonatomic) BOOL bCanStartTextViewAnimation;
@property (nonatomic) BOOL bRealTimeTranslate;
@property (weak, nonatomic) id<RecordInfoManagerDelegate> delegate;

+ (void)showRecordStartFailTips:(id)a0;

- (id)init;
- (void)changeRecordStateTo:(unsigned long long)a0;
- (void)startRealTimeTranslate;
- (void)stopTranslate;
- (void)startTranslate;
- (void)startTranslateTimer;
- (void)realStartTranslate;
- (void)checkChangeTranslatingWording;
- (void)updateTranslatingWording:(BOOL)a0;
- (void)displayTranslateResultText;
- (void)displayTranslateResultText:(BOOL)a0;
- (void)setAttributedText:(id)a0 animated:(BOOL)a1;
- (void)setErrorMessage:(id)a0;
- (unsigned int)getUncertainLength;
- (void)invalidateTranslateTimer;
- (void)makeTranslateStopWithError:(id)a0;
- (void)OnRecordVoiceChangeWithUserData:(id)a0;
- (void)OnVoiceTransResultChange:(id)a0 InputId:(unsigned int)a1;
- (void)OnVoiceTransEnd:(unsigned int)a0 VoiceIds:(id)a1;
- (void)OnVoiceTransTimeout:(unsigned int)a0;
- (void)onStartRecordingFromUsr:(id)a0 ToUsr:(id)a1;
- (id)generateAttrTextFrom:(id)a0 withUncertainLength:(unsigned int)a1 andTranslatingWording:(id)a2;
- (unsigned int)getSuffixDotCountWithString:(id)a0;
- (void).cxx_destruct;

@end
