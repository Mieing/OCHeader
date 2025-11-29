@interface IESLiveChorusTuningInfo : IESLivePBBaseMessage

@property (nonatomic) long long accompanimentVolume;
@property (nonatomic) long long leaderVolume;
@property (nonatomic) long long singerVolume;
@property (nonatomic) int accompanimentMode;

+ (id)descriptor;

@end
