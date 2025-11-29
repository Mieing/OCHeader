@class OMCTimeline, OMCMovieTitleSegment, OMCMusicSegment;

@interface OMCStoryline : NSObject

@property (readonly, nonatomic) struct SharedPtr<XMSStoryline> { struct XMSStoryline *x0; } backingStoryline;
@property (readonly, weak, nonatomic) OMCTimeline *timeline;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationStartTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } presentationTimeRange;
@property (readonly, nonatomic) BOOL hasMovieTitleSegment;
@property (readonly, nonatomic) OMCMovieTitleSegment *movieTitleSegment;
@property (readonly, nonatomic) BOOL hasMusicSegment;
@property (readonly, nonatomic) OMCMusicSegment *musicSegment;
@property (readonly, nonatomic) BOOL hasVideoTag;

- (id)initWithTimeline:(id)a0;
- (unsigned long long)segmentCount;
- (id)segmentAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfSegment:(id)a0;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)segmentIDAtIndex:(unsigned long long)a0;
- (id)segmentWithID:(id)a0;
- (BOOL)containsStorySegment:(id)a0;
- (id)storySegmentAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)allStorySegments;
- (id)allTransitionSegments;
- (BOOL)checkIfHasDifferentClipSegmentForMediaFilePath:(id)a0;
- (unsigned long long)numberOfAudialSegmentLanes;
- (id)segmentIDsOnAudialLaneIndex:(unsigned long long)a0;
- (unsigned long long)numberOfVisualSegmentLanes;
- (id)segmentIDsOnVisualLaneIndex:(unsigned long long)a0;
- (void)setVideoTagDesc:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
