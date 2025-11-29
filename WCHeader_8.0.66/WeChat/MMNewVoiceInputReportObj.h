@class NSString, AudioRecorderUserData, ReportVoiceResultMgr, NSMutableArray;

@interface MMNewVoiceInputReportObj : NSObject <IAudioSenderExt>

@property (nonatomic) unsigned long long pressToRecordTime;
@property (nonatomic) double pressToRecordOriginX;
@property (nonatomic) double pressToRecordOriginY;
@property (nonatomic) unsigned long long endRecordTime;
@property (nonatomic) double endRecordOriginX;
@property (nonatomic) double endRecordOriginY;
@property (nonatomic) unsigned long long recordAreaStayTime;
@property (nonatomic) unsigned long long transAreaStayTime;
@property (nonatomic) unsigned long long cancelAreaStayTime;
@property (nonatomic) unsigned long long recordState;
@property (nonatomic) unsigned long long recordStateTime;
@property (nonatomic) BOOL bHadReported;
@property (retain, nonatomic) AudioRecorderUserData *userData;
@property (retain, nonatomic) ReportVoiceResultMgr *resultReportMgr;
@property (nonatomic) unsigned long long exitType;
@property (nonatomic) unsigned long long transEndTime;
@property (nonatomic) unsigned long long clickLanguageSwitchTime;
@property (nonatomic) unsigned long long formatEndTime;
@property (nonatomic) unsigned int networkType;
@property (nonatomic) unsigned long long sendTextCount;
@property (nonatomic) unsigned int voiceDuration;
@property (nonatomic) unsigned long long serverTransCout;
@property (nonatomic) unsigned int defaultLanguageType;
@property (nonatomic) unsigned int sendWithLanguageType;
@property (nonatomic) BOOL clickToEdited;
@property (nonatomic) BOOL bEdited;
@property (nonatomic) BOOL bTransEnd;
@property (nonatomic) BOOL bTransTimeout;
@property (nonatomic) BOOL isShowingFormatResult;
@property (nonatomic) unsigned int clickFormatTextCount;
@property (nonatomic) unsigned int clickOriginTextCount;
@property (nonatomic) unsigned int formatTextWordCount;
@property (nonatomic) BOOL transTextEqualToFormatText;
@property (nonatomic) BOOL simplifyBtnExpose;
@property (nonatomic) unsigned int simplifyUseType;
@property (nonatomic) unsigned int simplifyInputTextCount;
@property (nonatomic) unsigned int simplifyOutputTextCount;
@property (retain, nonatomic) NSString *simplifySessionId;
@property (nonatomic) BOOL simplifyFail;
@property (retain, nonatomic) NSString *nsSendText;
@property (retain, nonatomic) NSMutableArray *voiceIdArray;

- (id)init;
- (void)startRecordWithPointInScreen:(struct CGPoint { double x0; double x1; })a0;
- (void)changeRecordStateTo:(unsigned long long)a0;
- (void)endPressWithPointInScreen:(struct CGPoint { double x0; double x1; })a0;
- (void)reportWithExitType:(unsigned long long)a0;
- (void)reportTransSendResult;
- (void)OnRecordVoiceChangeWithUserData:(id)a0;
- (void).cxx_destruct;

@end
