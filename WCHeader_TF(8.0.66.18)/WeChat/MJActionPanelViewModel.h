@class MJTimelineViewModel, MJSegmentViewModel, MJPlaybackViewModel, MJSpeechManager;

@interface MJActionPanelViewModel : NSObject

@property (retain, nonatomic) MJSegmentViewModel *segmentVM;
@property (readonly, weak, nonatomic) MJPlaybackViewModel *playbackVM;
@property (readonly, weak, nonatomic) MJTimelineViewModel *timelineVM;
@property (readonly, nonatomic) MJSpeechManager *speechManager;

- (id)initWithTimelineVM:(id)a0 playbackVM:(id)a1 speechManager:(id)a2;
- (void)dealloc;
- (id)createSegmentPictureInspectorViewModel;
- (id)createSegmentAudioInspectorViewModel;
- (id)createSegmentFilterInspectorViewModel;
- (id)createSegmentCropInspectorViewModel;
- (id)createSegmentSpeedInspectorViewModel;
- (id)createVoiceChangeInspectorViewModel;
- (id)mainMenuItemsAtPlaybackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)mainMenuItemsWithSegmentType:(unsigned long long)a0 playbackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;

@end
