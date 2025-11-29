@interface AudioSettingInfo : NSObject

@property (nonatomic) int voiceVolume;
@property (nonatomic) BOOL voiceEarMonitorEnable;
@property (nonatomic) int earMonitorVoiceVolume;

- (id)description;

@end
