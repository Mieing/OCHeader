@class IESLivePlayerVideoQualityAdaptive, NSString, IESLivePlayerVolumeAdaptive;
@protocol IESLivePlayerProtocol;

@interface IESLivePlayerVideoAudioEffectStrategy : NSObject <IESLivePlayerVideoQualityAdaptiveProtocol, IESLivePlayerVolumeAdaptiveProtocol>

@property (retain, nonatomic) IESLivePlayerVolumeAdaptive *volumeAdaptive;
@property (retain, nonatomic) IESLivePlayerVideoQualityAdaptive *videoQualityAdaptive;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetVideoAudioEffectStrategy:(id)a0;
- (void)setVolumeAdaptiveStrategy:(id)a0;
- (void)setVideoQualityAdaptiveStrategy:(id)a0;
- (void)setRealTimeVideoQualityInfo:(id)a0;
- (void)liveStreamAudioVolumeValue:(id)a0 volumeInfo:(id)a1;
- (void)parseSeiVideoAudioInfo:(id)a0 sei:(id)a1;
- (BOOL)enableLivePlayerVolumeAdaptive;
- (BOOL)enableLivePlayerVideoQualityAdaptive;
- (void)onVideoQualityAdaptiveChange:(id)a0;
- (void)onPlayerVolumeChange:(float)a0;
- (void).cxx_destruct;
- (id)init;

@end
