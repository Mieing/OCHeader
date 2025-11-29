@interface IESLiveVideoSuperResolutionStategyFromSmart : NSObject

@property (nonatomic) float offlineLowScoreForSr;
@property (nonatomic) float offlineHighScoreForSr;
@property (nonatomic) float onliveBestVQScoreForSr;
@property (nonatomic) float srEffectForStep;
@property (nonatomic) BOOL isUsePitaya;

@end
