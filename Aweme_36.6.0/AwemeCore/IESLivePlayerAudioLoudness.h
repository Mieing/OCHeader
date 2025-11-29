@interface IESLivePlayerAudioLoudness : NSObject

@property (nonatomic) float sourceLuft;
@property (nonatomic) float sourcePeak;
@property (nonatomic) float targetLufs;
@property (nonatomic) BOOL isEnableExternalAETargetLufs;

@end
