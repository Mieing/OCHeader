@class OrderedDictionary, MMLiveAudioVolumeInfo;

@interface MMLiveAudioVolumeManageLogic : NSObject

@property (retain, nonatomic) OrderedDictionary *volumeManageDict;
@property (nonatomic) int defaultVolume;
@property (readonly, nonatomic) int volume;
@property (readonly, nonatomic) MMLiveAudioVolumeInfo *preferVolumeInfo;

- (id)init;
- (void)setVolume:(long long)a0 business:(long long)a1;
- (void)unSetVolume:(long long)a0;
- (void)unSetAllVolumesExcept:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)manageVolumesPriority;
- (void)printVolumes;
- (void).cxx_destruct;

@end
