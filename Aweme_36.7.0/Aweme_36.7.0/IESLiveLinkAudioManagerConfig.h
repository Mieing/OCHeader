@class IESLiveLinkRTCInteractLogReporter, NSString, IESLiveLinkRTCSignalUser, IESLiveLinkAudioDiagnosisConfig, IESLiveLinkRTCInteractQosInfo;

@interface IESLiveLinkAudioManagerConfig : NSObject

@property (retain, nonatomic) IESLiveLinkRTCInteractQosInfo *qosInfo;
@property (retain, nonatomic) IESLiveLinkRTCInteractLogReporter *logReporter;
@property (copy, nonatomic) NSString *channelName;
@property (retain, nonatomic) IESLiveLinkRTCSignalUser *currentUser;
@property (nonatomic) BOOL useExternalAudioSource;
@property (nonatomic) unsigned long long externAudioInputSampleRate;
@property (nonatomic) unsigned long long externAudioInputChannel;
@property (nonatomic) BOOL useExternalAudioRender;
@property (nonatomic) unsigned long long externAudioOutputSampleRate;
@property (nonatomic) unsigned long long externAudioOutputChannel;
@property (retain, nonatomic) IESLiveLinkAudioDiagnosisConfig *audioDiagnosisConfig;
@property (nonatomic) BOOL enableMuteRemoteDisableAEC;

- (void).cxx_destruct;
- (id)init;

@end
