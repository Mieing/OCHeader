@interface ACCMusicVolumeModel : NSObject <NSCopying>

@property (nonatomic) BOOL voiceOn;
@property (nonatomic) BOOL voiceEnable;
@property (nonatomic) double voiceVolume;
@property (nonatomic) double bgmVolume;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
