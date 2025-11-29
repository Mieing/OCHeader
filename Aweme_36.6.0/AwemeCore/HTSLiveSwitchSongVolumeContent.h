@interface HTSLiveSwitchSongVolumeContent : IESLivePBBaseMessage

@property (nonatomic) long long singerVolume;
@property (nonatomic) long long accompanimentVolume;
@property (nonatomic) long long chorusSingersVolume;

+ (id)descriptor;

@end
