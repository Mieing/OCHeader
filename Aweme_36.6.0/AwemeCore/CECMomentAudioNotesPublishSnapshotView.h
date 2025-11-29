@class NSArray;

@interface CECMomentAudioNotesPublishSnapshotView : UIView

@property (copy, nonatomic) NSArray *waveArray;
@property (nonatomic) double audioDuration;
@property (nonatomic) double voiceprintWidth;
@property (nonatomic) long long voiceprintCount;

- (void)calculateVoiceprint;
- (id)initWithWaveArr:(id)a0 audioDuration:(double)a1 backgroundColor:(id)a2;
- (void).cxx_destruct;
- (id)snapshot;
- (void)setupUI;

@end
