@class NSString;

@interface VQMProfileInfoAudio : WXPBGeneratedMessage

@property (nonatomic) unsigned long long timestampRecvPlaybackAtFirst;
@property (nonatomic) unsigned long long timestampRecvRecordbackAtFirst;
@property (nonatomic) unsigned long long timestampStartupMicAtFirst;
@property (nonatomic) unsigned long long timestampStartupSpeakerAtFirst;
@property (nonatomic) unsigned long long timestampStartupSuccMicAtFirst;
@property (nonatomic) unsigned long long timestampStartupSuccSpeakerAtFirst;
@property (nonatomic) unsigned long long timestampStartUpAtFrist;
@property (nonatomic) unsigned long long timestampRecvAtFirst;
@property (nonatomic) int countStartUp;
@property (nonatomic) int countStartUpFailed;
@property (nonatomic) int countStartUpAtFristFailed;
@property (nonatomic) int errorCodeStartUpFinalFailed;
@property (nonatomic) int countInterrpute;
@property (nonatomic) unsigned long long timestampStartupPrewarnAudiounitAtFirst;
@property (nonatomic) unsigned long long timestampStartupSuccPrewarnAudiounitAtFirst;
@property (nonatomic) int deviceTypeBeforeStartupAtFirst;
@property (retain, nonatomic) NSString *portNameBeforeStartupAtFirst;
@property (nonatomic) unsigned long long timestampRecvPlaybackAtFinal;
@property (nonatomic) unsigned long long timestampRecvRecordbackAtFinal;
@property (nonatomic) unsigned long long countInterruptionRecoveryTotal;
@property (nonatomic) unsigned long long countInterruptionRecoveryFinal;

+ (void)initialize;

@end
