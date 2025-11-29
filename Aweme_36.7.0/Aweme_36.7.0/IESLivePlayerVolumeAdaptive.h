@class NSMutableArray;
@protocol IESLivePlayerVolumeAdaptiveProtocol;

@interface IESLivePlayerVolumeAdaptive : NSObject

@property (nonatomic) float srcLuft;
@property (nonatomic) float srcPeak;
@property (nonatomic) float shorttermLoudness;
@property (nonatomic) float momentaryLoudness;
@property (nonatomic) float windowLoudness;
@property (nonatomic) float windowPeak;
@property (nonatomic) int playingRenderdB;
@property (nonatomic) BOOL isReceiveFirstLoudnessFor2Strategy;
@property (nonatomic) float playVolumeInStartPlay;
@property (nonatomic) BOOL isIncreaseVolume;
@property (nonatomic) BOOL isDecreaseVolume;
@property (nonatomic) BOOL isAdjustStartVolume;
@property (nonatomic) BOOL isAdjustPlayingVolume;
@property (nonatomic) float startTargetVolumedB;
@property (nonatomic) float playingTargetVolumedB;
@property (nonatomic) float maxPlusAdjustAudioDB;
@property (nonatomic) float minMinusAdjustAudioDB;
@property (nonatomic) BOOL isAdjustStartVolumeUseLuf;
@property (nonatomic) float volumeRatio;
@property (nonatomic) BOOL isSecond;
@property (nonatomic) BOOL isUseWindowLoudness;
@property (retain, nonatomic) NSMutableArray *volumeRangeArray;
@property (retain, nonatomic) NSMutableArray *gainLoudnessArray;
@property (nonatomic) BOOL ishasAdjustStartVolume;
@property (nonatomic) BOOL ishasAdjustPlayingVolume;
@property (weak, nonatomic) id<IESLivePlayerVolumeAdaptiveProtocol> delegate;

- (void)setVolumeAdaptiveStrategy:(id)a0;
- (void)liveStreamAudioVolumeValue:(id)a0 volumeInfo:(id)a1;
- (void)resetVolumeAdaptiveStrategy:(id)a0;
- (void)audioBalanceSeiInfoParse:(id)a0 sei:(id)a1;
- (BOOL)playStartVolumeValid;
- (void)audioBalanceLoudness2Sei:(id)a0 sei:(id)a1;
- (void)audioBalanceLoudness3Sei:(id)a0 sei:(id)a1;
- (void)playVolumeStrategyForStart:(id)a0;
- (void)playVolumeSecondStrategyForPlaying:(id)a0;
- (void)playVolumeStrategyForPlaying:(id)a0;
- (void)playVolumeSecondStrategyForStartPlayUseLuf:(id)a0;
- (void)playVolumeStrategyForStartPlayUseLuf:(id)a0;
- (void)playVolumeStrategyForStartPlayUseRatio:(id)a0;
- (float)getCurrentAdjustVolumeDB:(float)a0;
- (float)calcutePlayerLufVolume:(float)a0;
- (float)calcutePlayeringRMSVolume:(float)a0;
- (void).cxx_destruct;
- (id)init;

@end
