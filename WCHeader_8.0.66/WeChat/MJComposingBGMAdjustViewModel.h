@class UBFloatSignal, MJPublisherContext, UBBooleanSignal, UBEmptySignal;

@interface MJComposingBGMAdjustViewModel : NSObject

@property (nonatomic) float bgmVolume;
@property (nonatomic) float ostVolume;
@property (nonatomic) BOOL shouldTurnonLyric;
@property (readonly, nonatomic) unsigned long long entryScene;
@property (readonly, nonatomic) UBEmptySignal *bgmVolumeWillStartChangeSignal;
@property (readonly, nonatomic) UBFloatSignal *bgmVolumeDidChangeSignal;
@property (readonly, nonatomic) UBFloatSignal *bgmVolumeDidFinishChangeSignal;
@property (readonly, nonatomic) UBEmptySignal *bgmVolumeDidCancelChangeSignal;
@property (readonly, nonatomic) UBEmptySignal *ostVolumeWillStartChangeSignal;
@property (readonly, nonatomic) UBFloatSignal *ostVolumeDidChangeSignal;
@property (readonly, nonatomic) UBFloatSignal *ostVolumeDidFinishChangeSignal;
@property (readonly, nonatomic) UBEmptySignal *ostVolumeDidCancelChangeSignal;
@property (nonatomic) BOOL shouldShowLyricButton;
@property (readonly, nonatomic) UBBooleanSignal *shouldTurnonLyricDidChangeSignal;
@property (readonly, nonatomic) double musicDuration;
@property (readonly, nonatomic) double musicPlayheadTime;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } musicTimeRange;
@property (readonly, nonatomic) double timelinePlaybackDuration;
@property (retain, nonatomic) MJPublisherContext *publisherContext;

- (id)initWithEntryScene:(unsigned long long)a0;
- (void)willStartChangeBGMVolume;
- (void)didFinishChangeBGMVolume:(float)a0;
- (void)didCancelChangeBGMVolume;
- (void)didChangeBGMVolume:(float)a0;
- (void)willStartChangeOSTVolume;
- (void)didFinishChangeOSTVolume:(float)a0;
- (void)didCancelChangeOSTVolume;
- (void)didChangeOSTVolume:(float)a0;
- (void)updateSlientlyWithBGMVolume:(float)a0;
- (void)updateSlientlyWithOSTVolume:(float)a0;
- (void)toggleLyricTurnonState;
- (void)updateSlientlyWithShouldTurnonLyric:(BOOL)a0;
- (BOOL)ableToTrim;
- (id)description;
- (void).cxx_destruct;

@end
