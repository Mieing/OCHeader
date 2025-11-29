@class NSOrderedSet, NSMutableOrderedSet;

@interface MJTrimSnapInfo : NSObject {
    NSMutableOrderedSet *_mutableAnchoredSegmentIDs;
}

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } snapTime;
@property (nonatomic) BOOL hasStorySegment;
@property (readonly, nonatomic) NSOrderedSet *anchoredSegmentIDs;

- (id)initWithSnapTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 hasStorySegment:(BOOL)a1 anchoredSegmentIDs:(id)a2;
- (void)appendAnchoredSegmentID:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
