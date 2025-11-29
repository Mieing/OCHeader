@class MJTimelineVolumeSliderInfo, MJTimelineViewModel, MJPlaybackViewModel, MJPublisherButton, NSMutableArray;

@interface MJTimelineVolumeView : UIView

@property (nonatomic) float originalMusicVolume;
@property (nonatomic) float originalOSTVolume;
@property (nonatomic) float originalNarrationVolume;
@property (retain, nonatomic) MJTimelineVolumeSliderInfo *musicVolumeSliderInfo;
@property (retain, nonatomic) MJTimelineVolumeSliderInfo *OSTVolumeSliderInfo;
@property (retain, nonatomic) MJTimelineVolumeSliderInfo *narrationVolumeSliderInfo;
@property (retain, nonatomic) NSMutableArray *slidersInfo;
@property (retain, nonatomic) MJPublisherButton *autoVolumeAdjustmentSwitch;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) MJTimelineViewModel *timelineVM;
@property (readonly, nonatomic) MJPlaybackViewModel *playbackVM;

- (id)initWithTimelineViewModel:(id)a0 playbackViewModel:(id)a1 options:(unsigned long long)a2;
- (void)dealloc;
- (void)setupViews;
- (void)setupAutoVolumeAdjustmentSwitch;
- (BOOL)setupMusicVolumeSliderIfNeeded;
- (BOOL)setupOSTVolumeSliderIfNeeded;
- (BOOL)setupNarrationVolumeSliderIfNeeded;
- (void)layoutViews;
- (void)layoutSliderWithInfo:(id)a0 topOffset:(double)a1;
- (void)bindViews;
- (BOOL)hasChanges;
- (void)musicVolumeSliderValueChanged:(id)a0;
- (void)musicVolumeSliderDidFinishChangeValue:(id)a0;
- (void)OSTVolumeSliderValueChanged:(id)a0;
- (void)OSTVolumeSliderDidFinishChangeValue:(id)a0;
- (void)narrationVolumeSliderValueChanged:(id)a0;
- (void)narrationVolumeSliderDidFinishChangeValue:(id)a0;
- (void)autoVolumeAdjustmentSwitchDidTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
