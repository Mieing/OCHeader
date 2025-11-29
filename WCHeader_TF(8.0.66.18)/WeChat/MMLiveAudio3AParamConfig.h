@interface MMLiveAudio3AParamConfig : NSObject

@property (nonatomic) int got_wave_3a_parm_flag;
@property (nonatomic) int wx3AEnable;
@property (nonatomic) int system_volume_type_voip;
@property (nonatomic) int nnaecSwitch;
@property (nonatomic) int nnaecEnable;
@property (nonatomic) int nnaecModel;
@property (nonatomic) int xnetScoreSwitch;
@property (nonatomic) int aecEnable_vpio;
@property (nonatomic) int aecEnable_rmio;
@property (nonatomic) int aecMode_vpio;
@property (nonatomic) int aecMode_rmio;
@property (nonatomic) int aecMode_bgm;
@property (nonatomic) int agcGain_speaker;
@property (nonatomic) int agcGain_receiver;
@property (nonatomic) int agcGain_wire_earphone;
@property (nonatomic) int agcGain_wireless_earphone;
@property (nonatomic) int nsEnable_voip;
@property (nonatomic) int nsEnable_live;
@property (nonatomic) int agcEnable_live;
@property (nonatomic) int agcEnable_voip;
@property (nonatomic) int nsMode_voip;
@property (nonatomic) int nsMode_live;
@property (nonatomic) int agcMode;
@property (nonatomic) int wx3AChannels;
@property (nonatomic) int wx3AEnable_headset;
@property (nonatomic) int wx3AALLEnable_headset;
@property (nonatomic) int trtc3Aenable;
@property (nonatomic) int wx3AMicChannels;
@property (nonatomic) int device_vpio_flag;
@property (nonatomic) int rmio_enable_by_iosversion;
@property (nonatomic) int wave3AModelExistFlag;
@property (nonatomic) int wave3ADeviceScore;
@property (nonatomic) int wx3ALowScoreVal;
@property (nonatomic) int wx3ALowScoreSwitch;
@property (nonatomic) unsigned int deviceLevel;
@property (nonatomic) unsigned int cpuScore;
@property (nonatomic) unsigned int gpuScore;

- (id)init;
- (void)setDeviceParams:(unsigned int)a0 withCpuScore:(unsigned int)a1 withGpuScore:(unsigned int)a2;
- (void)updateAudio3AParamWithTRTCInstance:(id)a0 isVoiceRoom:(BOOL)a1;
- (unsigned int)getXNetCommit;

@end
