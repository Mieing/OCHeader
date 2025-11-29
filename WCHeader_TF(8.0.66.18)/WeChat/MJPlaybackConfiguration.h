@class OMJID;

@interface MJPlaybackConfiguration : NSObject

@property (nonatomic) unsigned long long playbackMode;
@property (nonatomic) unsigned long long playbackStartMode;
@property (nonatomic) int loopCount;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTimeOffset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTimeOffset;
@property (nonatomic) BOOL isAudioEnabled;
@property (readonly, nonatomic) OMJID *segmentID;

- (id)init;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })playbackTimeRangeWithTimelineVM:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })playbackTimeRangeWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 timelineTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })playbackStartTimeWithTimelineVM:(id)a0 playbackVM:(id)a1;
- (void)resetToTimelineMode;
- (void)resetToSegmentModeWithSegmentID:(id)a0 playbackStartMode:(unsigned long long)a1 loopCount:(int)a2 startTimeOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 endTimeOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 isAudioEnabled:(BOOL)a5;
- (void)updateSegmentID:(id)a0;
- (void).cxx_destruct;

@end
