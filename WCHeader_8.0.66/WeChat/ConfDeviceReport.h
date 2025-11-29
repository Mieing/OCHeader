@interface ConfDeviceReport : WXPBGeneratedMessage

@property (nonatomic) unsigned int audioDeviceErrcode;
@property (nonatomic) unsigned int videoDeviceErrcode;
@property (nonatomic) unsigned int audioRecorderErrcode;
@property (nonatomic) unsigned int audioPlayerErrcode;
@property (nonatomic) unsigned int speakerMode;
@property (nonatomic) unsigned int phoneMode;
@property (nonatomic) unsigned int audioSourceMode;
@property (nonatomic) unsigned int speakerStreamType;
@property (nonatomic) unsigned int phoneStreamType;
@property (nonatomic) unsigned int ringPlayerErrcode;
@property (nonatomic) unsigned int audioSetmodeErrcode;
@property (nonatomic) int audioRecordReadnum;
@property (nonatomic) int playVolume;
@property (nonatomic) long long beginInterruptTimestamp;
@property (nonatomic) long long endInterruptTimestamp;
@property (nonatomic) int interruptCnt;
@property (nonatomic) int audioPlayCallnum;
@property (nonatomic) int audioIosMicAbnormal;
@property (nonatomic) unsigned long long talkViewStartTimestamp;
@property (nonatomic) unsigned long long audioDeviceSuccStartTimestamp;
@property (nonatomic) unsigned long long firstRecordTimestamp;
@property (nonatomic) unsigned long long firstPlayTimestamp;
@property (nonatomic) unsigned long long firstDecodeAudioPktTimestamp;
@property (nonatomic) unsigned int startSpeakerMode;
@property (nonatomic) unsigned int startPhoneMode;
@property (nonatomic) unsigned int startAudioSourceMode;
@property (nonatomic) unsigned int startSpeakerStreamType;
@property (nonatomic) unsigned int startPhoneStreamType;
@property (nonatomic) unsigned int localPictureFreezeCnt;
@property (nonatomic) unsigned int remotePictureFreezeCnt;
@property (nonatomic) unsigned int audioDeviceStartCnt;
@property (nonatomic) BOOL delayStartAudio;

+ (void)initialize;

@end
