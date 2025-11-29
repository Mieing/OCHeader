@class MJTimelineViewModel, MJPlaybackViewModel;

@interface MJSegmentCropInspectorViewModel : MJSegmentInspectorViewModel

@property (readonly, weak, nonatomic) MJTimelineViewModel *timelineVM;
@property (readonly, weak, nonatomic) MJPlaybackViewModel *playbackVM;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousEffectiveCroppedRect;

- (id)initWithWithSegment:(id)a0 type:(unsigned long long)a1 timelineVM:(id)a2 playbackVM:(id)a3;
- (BOOL)isCropRectsAlmostEqualWithRect1:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rect2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (BOOL)isResetEnabled;
- (id)title;
- (BOOL)hasChanges;
- (void).cxx_destruct;

@end
