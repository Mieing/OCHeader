@class NSMapTable, UBValueSignal, NSMutableOrderedSet, OMCStoryline;
@protocol MJMovieComposingContext;

@interface MJStorylineViewModel : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _durationBeforeSync;
}

@property (retain, nonatomic) NSMutableOrderedSet *segmentVMs;
@property (retain, nonatomic) NSMapTable *segmentVMsByID;
@property (retain, nonatomic) NSMutableOrderedSet *storySegmentVMs;
@property (retain, nonatomic) NSMutableOrderedSet *storyElementSegmentVMs;
@property (nonatomic) BOOL containsImageStorySegment;
@property (readonly, nonatomic) OMCStoryline *storyline;
@property (readonly, weak, nonatomic) id<MJMovieComposingContext> composingContext;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) UBValueSignal *durationDidChangeSignal;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } expandedDuration;
@property (readonly, nonatomic) double viewHeight;

- (id)initWithStoryline:(id)a0 viewHeight:(double)a1 composingContext:(id)a2;
- (void)dealloc;
- (void)initSegmentVMs;
- (void)updateDurationSilently:(BOOL)a0;
- (BOOL)containsSegmentVMWithID:(id)a0;
- (id)segmentVMWithID:(id)a0;
- (BOOL)containsSegmentVMWithType:(unsigned long long)a0;
- (BOOL)containsSegmentVMWithType:(unsigned long long)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)intersectSegmentVMWithType:(unsigned long long)a0 atTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 excudeSegmentID:(id)a2;
- (long long)intersectedSegmentVMCountWithType:(unsigned long long)a0 atTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 excudeSegmentID:(id)a2;
- (id)storyElementSegmentVMAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)nearstStoryClipSegmentToAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)nearstAnchoredClipSegmentAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)nearstAnchoredSegmentAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withType:(unsigned long long)a1;
- (id)nearstNextAnchoredSegmentAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withType:(unsigned long long)a1;
- (id)syncWithTimelineMutation:(id)a0;
- (id)internalInsertSegmentVM:(id)a0 atIndex:(unsigned long long)a1;
- (id)internalRemoveSegmentVM:(id)a0 atIndex:(unsigned long long)a1;
- (id)internalUpdateSegmentVM:(id)a0 withMutationInfo:(id)a1;
- (void)syncAfterUndoRedo;
- (BOOL)isStorySegmentVM:(id)a0;
- (BOOL)isAnchoredSegmentVM:(id)a0;
- (id)previousStoryElementSegment:(id)a0;
- (id)nextStoryElementSegment:(id)a0;
- (id)previousStorySegmentVM:(id)a0;
- (id)nextStorySegmentVM:(id)a0;
- (void)updateTransitionRelatedProperties;
- (void)updateCommonProperties;
- (id)description;
- (void).cxx_destruct;

@end
